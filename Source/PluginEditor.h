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
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Mid_Side_ControlAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Mid_Side_ControlAudioProcessorEditor)
};
