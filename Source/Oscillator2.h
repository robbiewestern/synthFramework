/*
  ==============================================================================

    Oscillator2.h
    Created: 25 May 2019 9:20:32pm
    Author:  Robbie Western

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/*
 */
class Oscillator2    : public Component
{
public:
    Oscillator2(SynthFrameworkAudioProcessor&);
    ~Oscillator2();
    
    void paint (Graphics&) override;
    void resized() override;
    
private:
    ComboBox osc2Menu;
    Slider Blendslider;
    
    ScopedPointer<AudioProcessorValueTreeState::ComboBoxAttachment> waveSelection2;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> blendVal;
    
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    SynthFrameworkAudioProcessor& processor;
    
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Oscillator2)
};
