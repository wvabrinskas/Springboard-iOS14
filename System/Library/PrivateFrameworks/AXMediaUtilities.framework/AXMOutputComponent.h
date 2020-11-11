/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AXMOutputComponent : NSObject {

	long long _componentState;

}

@property (assign,nonatomic) long long componentState;              //@synthesize componentState=_componentState - In the implementation block
+(BOOL)isSupported;
-(id)init;
-(void)handleRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setComponentState:(long long)arg1 ;
-(void)transitionToState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(long long)componentState;
-(id)description;
-(BOOL)canHandleRequest:(id)arg1 ;
@end
