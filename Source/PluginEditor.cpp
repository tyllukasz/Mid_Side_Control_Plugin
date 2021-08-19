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
    //MID slider
        //slider definition
        sliderMid.setSliderStyle(juce::Slider::SliderStyle::Rotary); //type
        sliderMid.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 40, 30); //text box definition
        sliderMid.setRange(0.0f, 1.0f, 0.1f); //adjustment range
        sliderMid.setValue(0.5f); //initial value
        addAndMakeVisible(sliderMid);

        //label
        labelSliderMid.setText("MID", juce::dontSendNotification);
        labelSliderMid.setJustificationType(juce::Justification::centred);
        labelSliderMid.attachToComponent(&sliderMid, false);
        addAndMakeVisible(labelSliderMid);

    //SIDE slider
        //slider definition
        sliderSide.setSliderStyle(juce::Slider::SliderStyle::Rotary); //type
        sliderSide.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 40, 30); //text box definition
        sliderSide.setRange(0.0f, 1.0f, 0.1f); //adjustment range
        sliderSide.setValue(0.5f); //initial value
        addAndMakeVisible(sliderSide);

        //label
        labelSliderSide.setText("SIDE", juce::dontSendNotification);
        labelSliderSide.setJustificationType(juce::Justification::centred);
        labelSliderSide.attachToComponent(&sliderSide, false);
        addAndMakeVisible(labelSliderSide);


    //GAIN slider
        //slider definition
        sliderGain.setSliderStyle(juce::Slider::SliderStyle::Rotary); //type
        sliderGain.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 40, 30); //text box definition
        sliderGain.setRange(0.0f, 1.0f, 0.1f); //adjustment range
        sliderGain.setValue(0.5f); //initial value
        addAndMakeVisible(sliderGain);

        //label
        labelSliderGain.setText("GAIN", juce::dontSendNotification);
        labelSliderGain.setJustificationType(juce::Justification::centred);
        labelSliderGain.attachToComponent(&sliderGain, false);
        addAndMakeVisible(labelSliderGain);

    setSize (400, 400);
}

Mid_Side_ControlAudioProcessorEditor::~Mid_Side_ControlAudioProcessorEditor()
{
}

//==============================================================================
void Mid_Side_ControlAudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll(juce::Colours::crimson); //background colour
}

void Mid_Side_ControlAudioProcessorEditor::resized()
{
    //SLIDERS
    sliderMid.setBounds(getWidth() / 4 - 50, getHeight() - 120, 100, 100);
    sliderSide.setBounds(getWidth() / 2 - 50, getHeight() - 120, 100, 100);
    sliderGain.setBounds(getWidth() * 3 / 4 -50, getHeight() - 120, 100, 100);

}
