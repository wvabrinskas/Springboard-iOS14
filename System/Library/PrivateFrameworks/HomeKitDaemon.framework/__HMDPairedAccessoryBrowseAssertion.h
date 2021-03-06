/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFAssertion.h>

@class HMDAccessoryBrowser;

@interface __HMDPairedAccessoryBrowseAssertion : HMFAssertion {

	HMDAccessoryBrowser* _accessoryBrowser;

}

@property (__weak,readonly) HMDAccessoryBrowser * accessoryBrowser;              //@synthesize accessoryBrowser=_accessoryBrowser - In the implementation block
-(HMDAccessoryBrowser *)accessoryBrowser;
-(id)initWithName:(id)arg1 ;
-(void)invalidate;
-(id)initWithAccessoryBrowser:(id)arg1 reason:(id)arg2 ;
@end

