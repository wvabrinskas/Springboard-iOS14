/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableString;

@interface _HKValidationErrorTracker : NSObject {

	long long _errorCount;
	NSMutableString* _errorMessage;

}

@property (assign,nonatomic) long long errorCount;                        //@synthesize errorCount=_errorCount - In the implementation block
@property (nonatomic,retain) NSMutableString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(id)init;
-(void)setErrorMessage:(NSMutableString *)arg1 ;
-(NSMutableString *)errorMessage;
-(void)setErrorCount:(long long)arg1 ;
-(long long)errorCount;
@end

