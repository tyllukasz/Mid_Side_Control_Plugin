/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
Mid_Side_ControlAudioProcessorEditor::Mid_Side_ControlAudioProcessorEditor (Mid_Side_ControlAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    //MID slider definition
    sliderMid.setSliderStyle(juce::Slider::SliderStyle::Rotary); //style
    sliderMid.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 40, 30); //text box definition
    sliderMid.setRange(0.0f, 1.0f, 0.1f); //adjustment range
    sliderMid.setValue(0.5f); //initial value
    addAndMakeVisible(sliderMid);

    //MID label
    labelSliderMid.setText("MID", juce::dontSendNotification);
    labelSliderMid.setJustificationType(juce::Justification::centred);
    labelSliderMid.attachToComponent(&sliderMid, false);
    addAndMakeVisible(labelSliderMid);

    //SIDE slider definition


    //GAIN slider definition

    setSize (400, 400);
}

Mid_Side_ControlAudioProcessorEditor::~Mid_Side_ControlAudioProcessorEditor()
{
}

//==============================================================================
void Mid_Side_ControlAudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll(juce::Colours::black); //background colour
}

void Mid_Side_ControlAudioProcessorEditor::resized()
{
    sliderMid.setBounds(getWidth() / 2, getHeight() / 2, 100, 100);
}
