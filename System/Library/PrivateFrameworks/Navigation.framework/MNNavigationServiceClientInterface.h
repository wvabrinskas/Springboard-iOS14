/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNNavigationServiceClientInterface <NSObject>
@required
-(void)navigationServiceProxy:(id)arg1 didUpdateMatchedLocation:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(unsigned long long)arg3;
-(void)navigationServiceProxy:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;
-(void)navigationServiceProxy:(id)arg1 updateSignsWithInfo:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
-(void)navigationServiceProxyWillPauseNavigation:(id)arg1;
-(void)navigationServiceProxy:(id)arg1 willStartNavigationWithRoute:(id)arg2 navigationType:(int)arg3 request:(id)arg4 response:(id)arg5;
-(void)navigationServiceProxyPredictingDidArrive:(id)arg1;
-(void)navigationServiceProxy:(id)arg1 didChangeVolume:(unsigned long long)arg2;
-(void)navigationServiceProxy:(id)arg1 didStartSpeakingPrompt:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 didFailWithError:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 didFailRerouteWithError:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 didProcessSpeechEvent:(id)arg2;
-(void)navigationServiceProxyWillResumeFromPauseNavigation:(id)arg1;
-(void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputCurrentSettingForVoicePrompt:(id)arg2;
-(void)navigationServiceProxyDidArrive:(id)arg1;
-(void)navigationServiceProxy:(id)arg1 hideJunctionViewForId:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 showJunctionView:(id)arg2;
-(void)navigationServiceProxyDidEnterPreArrivalState:(id)arg1;
-(void)navigationServiceProxy:(id)arg1 hideLaneDirectionsForId:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8;
-(void)navigationServiceProxy:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
-(void)navigationServiceProxyBeginGuidanceUpdate:(id)arg1;
-(void)navigationServiceProxy:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
-(void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;
-(void)navigationServiceProxy:(id)arg1 willRequestRealtimeUpdatesForRouteIDs:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
-(void)navigationServiceProxy:(id)arg1 didActivateAudioSession:(BOOL)arg2;
-(void)navigationServiceProxy:(id)arg1 showLaneDirections:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 didRerouteWithRoute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;
-(void)navigationServiceProxy:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
-(void)navigationServiceProxy:(id)arg1 triggerHaptics:(int)arg2;
-(void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputSettings:(id)arg2;
-(void)navigationServiceProxyDidCancelReroute:(id)arg1;
-(void)navigationServiceProxy:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
-(void)navigationServiceProxy:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
-(void)navigationServiceProxy:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2;
-(void)navigationServiceProxy:(id)arg1 didUpdatePossibleCommuteDestinations:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
-(void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
-(void)navigationServiceProxyEndGuidanceUpdate:(id)arg1;
-(void)navigationServiceProxyWillReroute:(id)arg1;
-(void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputRouteSelection:(unsigned long long)arg2;
-(void)navigationServiceProxy:(id)arg1 usePersistentDisplay:(BOOL)arg2;
-(void)navigationServiceProxy:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
-(void)navigationServiceProxy:(id)arg1 willProcessSpeechEvent:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
-(void)navigationServiceProxy:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;
-(void)navigationServiceProxy:(id)arg1 didReceiveRealtimeUpdates:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3;
-(void)navigationServiceProxyHideSecondaryStep:(id)arg1;
-(void)navigationServiceProxy:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 newGuidanceEventFeedback:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputCurrentSetting:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
-(void)navigationServiceProxy:(id)arg1 didUpdateRouteWithNewRideSelection:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;
-(void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
-(void)navigationServiceProxy:(id)arg1 didChangeNavigationState:(int)arg2;

@end
