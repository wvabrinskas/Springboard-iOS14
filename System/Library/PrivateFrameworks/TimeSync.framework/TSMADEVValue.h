/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TSMADEVValue : NSObject {

	double _observationInterval;
	double _madev;

}

@property (nonatomic,readonly) double observationInterval;              //@synthesize observationInterval=_observationInterval - In the implementation block
@property (nonatomic,readonly) double madev;                            //@synthesize madev=_madev - In the implementation block
-(double)madev;
-(id)description;
-(double)observationInterval;
-(id)initWithObservationInterval:(double)arg1 andMADEV:(double)arg2 ;
@end
