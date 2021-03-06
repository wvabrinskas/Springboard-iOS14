/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSNumber;

@interface CARunData : NSObject {

	NSDictionary* _startEvent;
	NSDictionary* _firstTargetFoundEvent;
	NSDictionary* _firstRangeEvent;
	NSDictionary* _firstPoseEvent;
	NSDictionary* _stopEvent;
	NSDictionary* _armsReachEvent;
	NSNumber* _numberOfMotionEvents;
	NSNumber* _numberOfTargetFoundEvents;
	NSNumber* _numberOfTargetRevokedEvents;
	NSNumber* _numberOfErrorEvents;
	NSNumber* _numberOfInvalidPoseEvents;

}

@property (nonatomic,retain) NSDictionary * startEvent;                           //@synthesize startEvent=_startEvent - In the implementation block
@property (nonatomic,retain) NSDictionary * firstTargetFoundEvent;                //@synthesize firstTargetFoundEvent=_firstTargetFoundEvent - In the implementation block
@property (nonatomic,retain) NSDictionary * firstRangeEvent;                      //@synthesize firstRangeEvent=_firstRangeEvent - In the implementation block
@property (nonatomic,retain) NSDictionary * firstPoseEvent;                       //@synthesize firstPoseEvent=_firstPoseEvent - In the implementation block
@property (nonatomic,retain) NSDictionary * stopEvent;                            //@synthesize stopEvent=_stopEvent - In the implementation block
@property (nonatomic,retain) NSDictionary * armsReachEvent;                       //@synthesize armsReachEvent=_armsReachEvent - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfMotionEvents;                     //@synthesize numberOfMotionEvents=_numberOfMotionEvents - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfTargetFoundEvents;                //@synthesize numberOfTargetFoundEvents=_numberOfTargetFoundEvents - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfTargetRevokedEvents;              //@synthesize numberOfTargetRevokedEvents=_numberOfTargetRevokedEvents - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfErrorEvents;                      //@synthesize numberOfErrorEvents=_numberOfErrorEvents - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfInvalidPoseEvents;                //@synthesize numberOfInvalidPoseEvents=_numberOfInvalidPoseEvents - In the implementation block
-(void)start:(id)arg1 ;
-(id)init;
-(void)stop:(id)arg1 ;
-(void)error:(id)arg1 ;
-(NSDictionary *)startEvent;
-(void)setStartEvent:(NSDictionary *)arg1 ;
-(void)logData;
-(void)motion:(id)arg1 ;
-(void)setNumberOfErrorEvents:(NSNumber *)arg1 ;
-(NSNumber *)numberOfErrorEvents;
-(void)setNumberOfMotionEvents:(NSNumber *)arg1 ;
-(void)setNumberOfTargetFoundEvents:(NSNumber *)arg1 ;
-(void)setNumberOfTargetRevokedEvents:(NSNumber *)arg1 ;
-(void)setNumberOfInvalidPoseEvents:(NSNumber *)arg1 ;
-(void)setStopEvent:(NSDictionary *)arg1 ;
-(NSNumber *)numberOfMotionEvents;
-(NSDictionary *)firstTargetFoundEvent;
-(void)setFirstTargetFoundEvent:(NSDictionary *)arg1 ;
-(NSNumber *)numberOfTargetFoundEvents;
-(NSNumber *)numberOfTargetRevokedEvents;
-(NSDictionary *)firstPoseEvent;
-(void)setFirstPoseEvent:(NSDictionary *)arg1 ;
-(NSDictionary *)firstRangeEvent;
-(void)setFirstRangeEvent:(NSDictionary *)arg1 ;
-(NSNumber *)numberOfInvalidPoseEvents;
-(NSDictionary *)stopEvent;
-(NSDictionary *)armsReachEvent;
-(void)targetFound:(id)arg1 ;
-(void)targetRevoked:(id)arg1 ;
-(void)firstPose:(id)arg1 ;
-(void)firstRange:(id)arg1 ;
-(void)invalidPose:(id)arg1 ;
-(void)setArmsReachEvent:(NSDictionary *)arg1 ;
@end

