/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RTStateDepictionOnePredEl, NSUUID;

@interface RTStateDepcitionOneStatePred : NSObject {

	RTStateDepictionOnePredEl* _weekly;
	RTStateDepictionOnePredEl* _daily;
	NSUUID* _stateUUID;

}

@property (nonatomic,retain) RTStateDepictionOnePredEl * weekly;              //@synthesize weekly=_weekly - In the implementation block
@property (nonatomic,retain) RTStateDepictionOnePredEl * daily;               //@synthesize daily=_daily - In the implementation block
@property (nonatomic,retain) NSUUID * stateUUID;                              //@synthesize stateUUID=_stateUUID - In the implementation block
-(id)init;
-(RTStateDepictionOnePredEl *)daily;
-(RTStateDepictionOnePredEl *)weekly;
-(void)setWeekly:(RTStateDepictionOnePredEl *)arg1 ;
-(void)setDaily:(RTStateDepictionOnePredEl *)arg1 ;
-(NSUUID *)stateUUID;
-(void)setStateUUID:(NSUUID *)arg1 ;
@end

