/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AXTapToSpeakTime.framework/AXTapToSpeakTime
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityUtilities/AXSettings.h>

@interface AXTimeOutputPreferences : AXSettings
+(id)sharedInstance;
-(id)tapToSpeakAvailabilityOptions;
-(void)_setNPSValue:(id)arg1 preferenceKey:(id)arg2 ;
-(id)localizedStringForTapToSpeakTimeAvailability:(long long)arg1 ;
-(void)setTapToSpeakTimeAvailability:(long long)arg1 ;
-(id)tapToSpeakTimeLocalizedDescription;
-(id)tapticTimeLocalizedDescription;
-(id)tapToSpeakTimeLocalizedTitle;
-(void)setVoiceOverTapticTimeEncoding:(long long)arg1 ;
-(BOOL)tapToSpeakTimeEnabled;
-(id)accessibilityDomainAccessor;
-(id)tapticTimeEncodingOptions;
-(id)_npsValueForPreferenceKey:(id)arg1 ;
-(void)setVoiceOverTapticChimesEnabled:(BOOL)arg1 ;
-(void)setTapToSpeakTimeEnabled:(BOOL)arg1 ;
-(long long)_npsIntegerValueForPreferenceKey:(id)arg1 defaultValue:(long long)arg2 ;
-(void)setVoiceOverTapticChimesSoundType:(long long)arg1 ;
-(id)tapticChimesFrequencyOptions;
-(id)tapticChimesSoundsLocalizedTitle;
-(BOOL)_voiceOverIsInTripleClick;
-(BOOL)voiceOverTapticChimesEnabled;
-(BOOL)voiceOverTapticTimeMode;
-(long long)voiceOverTapticTimeEncoding;
-(id)localizedStringForKey:(id)arg1 ;
-(id)tapticChimesLocalizedTitle;
-(id)tapticTimeLocalizedCurrentMode;
-(id)tapticChimesLocalizedDescription;
-(BOOL)_voiceOverIsEnabled;
-(long long)voiceOverTapticChimesFrequencyEncoding;
-(id)localizedStringForTapticTimeEncoding:(long long)arg1 ;
-(long long)tapToSpeakTimeAvailability;
-(id)_npsValueForPreferenceKey:(id)arg1 expectedClass:(Class)arg2 ;
-(id)tapticChimesLocalizedCurrentFrequency;
-(long long)voiceOverTapticChimesSoundType;
-(id)localizedStringForTapticChimesSoundType:(long long)arg1 ;
-(id)localizedStringForTapticChimesFrequencyEncoding:(long long)arg1 ;
-(BOOL)_npsBoolValueForPreferenceKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(id)tapticTimeLocalizedTitle;
-(void)setVoiceOverTapticChimesFrequencyEncoding:(long long)arg1 ;
-(id)tapticChimesLocalizedCurrentSounds;
-(id)tapticChimesScheduleLocalizedTitle;
-(id)tapticTimeModeLocalizedDescription;
-(void)setVoiceOverTapticTimeMode:(BOOL)arg1 ;
-(id)tapticChimesSoundsOptions;
@end

