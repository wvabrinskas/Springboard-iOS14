/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BusinessChat/BusinessChat-Structs.h>
#import <libobjc.A.dylib/BCImageManagerProtocol.h>

@protocol BCNetworkProviderProtocol;
@class NSString;

@interface BCImageManager : NSObject <BCImageManagerProtocol> {

	id<BCNetworkProviderProtocol> _networkProvider;

}

@property (nonatomic,readonly) id<BCNetworkProviderProtocol> networkProvider;              //@synthesize networkProvider=_networkProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<BCNetworkProviderProtocol>)networkProvider;
-(id)init;
-(void)fetchBrandIconDataForMapItem:(id)arg1 desiredSize:(CGSize)arg2 allowSmaller:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchNavBarBrandIconDataForMapItem:(id)arg1 desiredSize:(CGSize)arg2 allowSmaller:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithNetworkProvider:(id)arg1 ;
-(void)_fetchBrandIconDataForMapItem:(id)arg1 desiredSize:(CGSize)arg2 allowSmaller:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_fetchNavBarBrandIconDataForMapItem:(id)arg1 desiredSize:(CGSize)arg2 allowSmaller:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
@end

