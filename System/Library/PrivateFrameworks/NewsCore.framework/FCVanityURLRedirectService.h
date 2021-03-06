/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FCContentContext;
@class FCFetchedValueManager;

@interface FCVanityURLRedirectService : NSObject {

	FCFetchedValueManager* _vanityURLMappingManager;
	id<FCContentContext> _contentContext;

}

@property (nonatomic,readonly) id<FCContentContext> contentContext;                          //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,readonly) FCFetchedValueManager * vanityURLMappingManager;              //@synthesize vanityURLMappingManager=_vanityURLMappingManager - In the implementation block
-(id)init;
-(id)initWithContentContext:(id)arg1 ;
-(id)destinationURLForURL:(id)arg1 ;
-(id)_destinationURLForURL:(id)arg1 ;
-(FCFetchedValueManager *)vanityURLMappingManager;
-(BOOL)hasRedirectForURL:(id)arg1 ;
-(void)resolveURL:(id)arg1 withQualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)acquireHoldTokenOnUnderlyingAssets;
-(void)updateUnderlyingMappingWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id<FCContentContext>)contentContext;
@end

