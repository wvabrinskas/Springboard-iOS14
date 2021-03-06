/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface BWLimitedGMErrorLogger : NSObject {

	int _maxLoggingCount;
	int _currentLoggingCount;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int maxLoggingCount;                  //@synthesize maxLoggingCount=_maxLoggingCount - In the implementation block
@property (nonatomic,readonly) int currentLoggingCount;              //@synthesize currentLoggingCount=_currentLoggingCount - In the implementation block
-(void)resetCurrentLoggingCounter;
-(void)logErrorNumber:(int)arg1 errorString:(id)arg2 ;
-(id)initWithName:(id)arg1 maxLoggingCount:(int)arg2 ;
-(NSString *)name;
-(int)currentLoggingCount;
-(int)maxLoggingCount;
-(void)dealloc;
@end

