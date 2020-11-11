/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BKMatchEvent : NSObject {

	BOOL _result;
	unsigned long long _timeStamp;

}

@property (assign,nonatomic) BOOL result;                               //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) unsigned long long timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
+(id)matchEventWithDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setResult:(BOOL)arg1 ;
-(unsigned long long)timeStamp;
-(void)setTimeStamp:(unsigned long long)arg1 ;
-(BOOL)result;
@end
