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
class Mid_Side_ControlAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Mid_Side_ControlAudioProcessorEditor (Mid_Side_ControlAudioProcessor&);
    ~Mid_Side_ControlAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:

    //SLIDERS
        juce::Slider sliderMid; //slider for MID control
        juce::Label labelSliderMid; //label with description

        juce::Slider sliderSide; //slider for SIDE control
        juce::Label labelSliderSide; //label with description

        juce::Slider sliderGain; //slider for GAIN control
        juce::Label labelSliderGain; //label with description

    Mid_Side_ControlAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Mid_Side_ControlAudioProcessorEditor)
};
