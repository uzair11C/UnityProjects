using UnityEngine;
using UnityEditor;
using System.Collections;
using EasyInput.Core;
using UnityEditor.SceneManagement;

[InitializeOnLoad]
public static class CreateAxesEditor
{

    static CreateAxesEditor()
    {
        EditorApplication.hierarchyWindowChanged += OnHierarchyChange;
        EditorApplication.hierarchyWindowChanged += addOtherExamplesToBuildSettings;
    }

    static void addOtherExamplesToBuildSettings()
    {
        //if we are in the master example scene add all the scenes to the build settings
        if (EditorSceneManager.GetActiveScene().name.Contains("MasterExample"))
        {
            EditorBuildSettingsScene[] newBuildSettings = new EditorBuildSettingsScene[9];
            newBuildSettings[0] = new EditorBuildSettingsScene("Assets/Easy Input Helper/Scenes/MasterExample.unity", true);
            newBuildSettings[1] = new EditorBuildSettingsScene("Assets/Easy Input Helper/Scenes/SpecificExamples/accelerometerSiriRemoteExample.unity", true);
            newBuildSettings[2] = new EditorBuildSettingsScene("Assets/Easy Input Helper/Scenes/SpecificExamples/controlsExample.unity", true);
            newBuildSettings[3] = new EditorBuildSettingsScene("Assets/Easy Input Helper/Scenes/SpecificExamples/firstPersonSiriRemoteExample.unity", true);
            newBuildSettings[4] = new EditorBuildSettingsScene("Assets/Easy Input Helper/Scenes/SpecificExamples/GuiNavigationExample.unity", true);
            newBuildSettings[5] = new EditorBuildSettingsScene("Assets/Easy Input Helper/Scenes/SpecificExamples/mFiControllerEventsDiagnosticExample.unity", true);
            newBuildSettings[6] = new EditorBuildSettingsScene("Assets/Easy Input Helper/Scenes/SpecificExamples/siriRemoteEventsDiagnosticExample.unity", true);
            newBuildSettings[7] = new EditorBuildSettingsScene("Assets/Easy Input Helper/Scenes/SpecificExamples/motionEventsDiagnosticExample.unity", true);
            newBuildSettings[8] = new EditorBuildSettingsScene("Assets/Easy Input Helper/Scenes/SpecificExamples/bowlingExample.unity", true);


            EditorBuildSettings.scenes = newBuildSettings;

            //we only need to execute once           
            EditorApplication.hierarchyWindowChanged -= addOtherExamplesToBuildSettings;
        }
    }
    static void OnHierarchyChange()
    {
        //add our axes (if not already present when we read the file below)
        SerializedObject serializedObject = new SerializedObject(AssetDatabase.LoadAllAssetsAtPath("ProjectSettings/InputManager.asset")[0]);
        SerializedProperty axesProperty = serializedObject.FindProperty("m_Axes");
        SerializedProperty childElement;

        bool isAxesPresent = false;

        int count = axesProperty.arraySize;
            

        for (int i = 0; i < count; i++)
        {
            childElement = axesProperty.GetArrayElementAtIndex(i);
            if (GetChildProperty(childElement, "m_Name").stringValue.Equals(EasyInputConstants.P1_LEFTSTICK_HORIZONTAL))
            {
                isAxesPresent = true;
                break;
            }
        }

        //the axes were not present add them and save the file (there are 24 axes 8 per player and 3 players)
        //also 8 keyboard emulation axes and 6 for the remote touches for 38 total
        //unfortunately have to add manually
        if (!isAxesPresent)
        {
            axesProperty.arraySize += 38;
            serializedObject.ApplyModifiedProperties();


            //player 1 (keyboard emulation)
            //ATV_P1_LeftStick_Horizontal
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_LEFTSTICK_HORIZONTAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "left";
            GetChildProperty(childElement, "positiveButton").stringValue = "right";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P1_LeftStick_Vertical
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_LEFTSTICK_VERTICAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "down";
            GetChildProperty(childElement, "positiveButton").stringValue = "up";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 1;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P1_RightStick_Horizontal
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_RIGHTSTICK_HORIZONTAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "[4]";
            GetChildProperty(childElement, "positiveButton").stringValue = "[6]";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 2;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P1_RightStick_Vertical
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_RIGHTSTICK_VERTICAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "[2]";
            GetChildProperty(childElement, "positiveButton").stringValue = "[8]";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 3;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P1_Dpad_Horizontal
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_DPAD_HORIZONTAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "delete";
            GetChildProperty(childElement, "positiveButton").stringValue = "page down";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P1_Dpad_Vertical
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_DPAD_VERTICAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "end";
            GetChildProperty(childElement, "positiveButton").stringValue = "home";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P1_LeftTrigger
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_LEFTTRIGGER;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "[0]";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P1_RightTrigger
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_RIGHTTRIGGER;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "[.]";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //player 1 (real)
            //ATV_P1_LeftStick_Horizontal
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_LEFTSTICK_HORIZONTAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .19f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P1_LeftStick_Vertical
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_LEFTSTICK_VERTICAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .19f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = true;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 1;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P1_RightStick_Horizontal
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_RIGHTSTICK_HORIZONTAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .19f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 2;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P1_RightStick_Vertical
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_RIGHTSTICK_VERTICAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .19f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = true;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 3;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P1_Dpad_Horizontal
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_DPAD_HORIZONTAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "joystick 1 button 7";
            GetChildProperty(childElement, "positiveButton").stringValue = "joystick 1 button 5";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P1_Dpad_Vertical
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_DPAD_VERTICAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "joystick 1 button 6";
            GetChildProperty(childElement, "positiveButton").stringValue = "joystick 1 button 4";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P1_LeftTrigger
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_LEFTTRIGGER;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "joystick 1 button 10";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P1_RightTrigger
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_RIGHTTRIGGER;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "joystick 1 button 11";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //player 2

            //ATV_P2_LeftStick_Horizontal
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P2_LEFTSTICK_HORIZONTAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .19f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 2;
            count++;

            //ATV_P2_LeftStick_Vertical
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P2_LEFTSTICK_VERTICAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .19f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = true;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 1;
            GetChildProperty(childElement, "joyNum").intValue = 2;
            count++;

            //ATV_P2_RightStick_Horizontal
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P2_RIGHTSTICK_HORIZONTAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .19f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 2;
            GetChildProperty(childElement, "joyNum").intValue = 2;
            count++;

            //ATV_P2_RightStick_Vertical
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P2_RIGHTSTICK_VERTICAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .19f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = true;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 3;
            GetChildProperty(childElement, "joyNum").intValue = 2;
            count++;

            //ATV_P2_Dpad_Horizontal
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P2_DPAD_HORIZONTAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "joystick 2 button 7";
            GetChildProperty(childElement, "positiveButton").stringValue = "joystick 2 button 5";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P2_Dpad_Vertical
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P2_DPAD_VERTICAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "joystick 2 button 6";
            GetChildProperty(childElement, "positiveButton").stringValue = "joystick 2 button 4";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P2_LeftTrigger
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P2_LEFTTRIGGER;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "joystick 2 button 10";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P2_RightTrigger
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P2_RIGHTTRIGGER;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "joystick 2 button 11";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //player 3

            //ATV_P3_LeftStick_Horizontal
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P3_LEFTSTICK_HORIZONTAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .19f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 3;
            count++;

            //ATV_P3_LeftStick_Vertical
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P3_LEFTSTICK_VERTICAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .19f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = true;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 1;
            GetChildProperty(childElement, "joyNum").intValue = 3;
            count++;

            //ATV_P3_RightStick_Horizontal
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P3_RIGHTSTICK_HORIZONTAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .19f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 2;
            GetChildProperty(childElement, "joyNum").intValue = 3;
            count++;

            //ATV_P3_RightStick_Vertical
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P3_RIGHTSTICK_VERTICAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .19f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = true;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 3;
            GetChildProperty(childElement, "joyNum").intValue = 3;
            count++;

            //ATV_P3_Dpad_Horizontal
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P3_DPAD_HORIZONTAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "joystick 3 button 7";
            GetChildProperty(childElement, "positiveButton").stringValue = "joystick 3 button 5";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P3_Dpad_Vertical
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P3_DPAD_VERTICAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "joystick 3 button 6";
            GetChildProperty(childElement, "positiveButton").stringValue = "joystick 3 button 4";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P3_LeftTrigger
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P3_LEFTTRIGGER;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "joystick 3 button 10";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P3_RightTrigger
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P3_RIGHTTRIGGER;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "joystick 3 button 11";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 1000f;
            GetChildProperty(childElement, "dead").floatValue = .001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1000f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 0;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P1_Remote_Horizontal
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_REMOTE_HORIZONTAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .0001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P1_Remote_Vertical
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P1_REMOTE_VERTICAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .0001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = true;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 1;
            GetChildProperty(childElement, "joyNum").intValue = 1;
            count++;

            //ATV_P2_Remote_Horizontal
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P2_REMOTE_HORIZONTAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .0001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 2;
            count++;

            //ATV_P2_Remote_Vertical
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P2_REMOTE_VERTICAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .0001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = true;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 1;
            GetChildProperty(childElement, "joyNum").intValue = 2;
            count++;

            //ATV_P3_Remote_Horizontal
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P3_REMOTE_HORIZONTAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .0001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = false;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 0;
            GetChildProperty(childElement, "joyNum").intValue = 3;
            count++;

            //ATV_P3_Remote_Vertical
            childElement = axesProperty.GetArrayElementAtIndex(count);

            GetChildProperty(childElement, "m_Name").stringValue = EasyInputConstants.P3_REMOTE_VERTICAL;
            GetChildProperty(childElement, "descriptiveName").stringValue = "";
            GetChildProperty(childElement, "descriptiveNegativeName").stringValue = "";
            GetChildProperty(childElement, "negativeButton").stringValue = "";
            GetChildProperty(childElement, "positiveButton").stringValue = "";
            GetChildProperty(childElement, "altNegativeButton").stringValue = "";
            GetChildProperty(childElement, "altPositiveButton").stringValue = "";
            GetChildProperty(childElement, "gravity").floatValue = 0f;
            GetChildProperty(childElement, "dead").floatValue = .0001f;
            GetChildProperty(childElement, "sensitivity").floatValue = 1f;
            GetChildProperty(childElement, "snap").boolValue = false;
            GetChildProperty(childElement, "invert").boolValue = true;
            GetChildProperty(childElement, "type").intValue = 2;
            GetChildProperty(childElement, "axis").intValue = 1;
            GetChildProperty(childElement, "joyNum").intValue = 3;

            serializedObject.ApplyModifiedProperties();
        }


        //we only need to execute once           
        EditorApplication.hierarchyWindowChanged -= OnHierarchyChange;
        

    }

    public static SerializedProperty GetChildProperty(SerializedProperty parent, string name)
    {

        //copy so we don't iterate original
        SerializedProperty copiedProperty = parent.Copy();

        bool moreChildren = true;

        //step one level into child
        copiedProperty.Next(true);

        //iterate on all properties one level deep
        while (moreChildren)
        {
            //found the child we were looking for
            if (copiedProperty.name.Equals(name))
                return copiedProperty;

            //move to the next property
            moreChildren = copiedProperty.Next(false);
        }

        //if we get here we didn't find it
        return null;
    }

}