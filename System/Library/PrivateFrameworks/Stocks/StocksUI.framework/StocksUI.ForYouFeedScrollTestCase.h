/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SNTestCaseScroll.h>

@class NSString;

@interface StocksUI.ForYouFeedScrollTestCase : NSObject <SNTestCaseScroll> {

	 testName;
	 timeoutInSeconds;
	 aggregate;
	 iterations;
	 offset;
	 numberOfScreens;

}

@property (readonly,nonatomic) NSString * testName; 
@property (readonly,nonatomic) double timeoutInSeconds; 
@property (readonly,nonatomic) unsigned long long aggregate; 
@property (readonly,nonatomic) long long iterations; 
@property (readonly,nonatomic) long long offset; 
@property (readonly,nonatomic) long long numberOfScreens; 
-(NSString *)testName;
-(unsigned long long)aggregate;
-(id)init;
-(id)scrollViewWithContext:(id)arg1 ;
-(long long)iterations;
-(long long)offset;
-(long long)numberOfScreens;
-(double)timeoutInSeconds;
@end
