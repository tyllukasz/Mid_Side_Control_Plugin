/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Mid_Side_ControlAudioProcessorEditor  : public juce::AudioProcessorEditor,
                                              public juce::Slider::Listener //adding functionality of SLider::Listener class
{
public:
    Mid_Side_ControlAudioProcessorEditor (Mid_Side_ControlAudioProcessor&);
    ~Mid_Side_ControlAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

    void sliderValueChanged(juce::Slider* slider) override; //new method

private:

    //SLIDERS
        juce::Slider sliderMid; //slider for MID control
        juce::Label labelSliderMid; //label with description

        juce::Slider sliderSide; //slider for SIDE control
        juce::Label labelSliderSide; //label with description

        juce::Slider sliderGain; //slider for GAIN control
        juce::Label labelSliderGain; //label with description

        juce::Slider sliderSwitch; //slider for switching betwen M/S/ALL
        juce::Label labelSliderSwitchM; //label MID
        juce::Label labelSliderSwitchS; //label SIDE
        juce::Label labelSliderSwitchA; //label ALL


            
            

    Mid_Side_ControlAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Mid_Side_ControlAudioProcessorEditor)
};
