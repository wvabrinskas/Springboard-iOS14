/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FPDAccessControlServicing.h>

@class FPDAccessControlStore;

@interface FPDAccessControlServicer : NSObject <FPDAccessControlServicing> {

	FPDAccessControlStore* _accessStore;

}

@property (assign,nonatomic,__weak) FPDAccessControlStore * accessStore;              //@synthesize accessStore=_accessStore - In the implementation block
-(void)bundleIdentifiersWithAccessToAnyItemCompletionHandler:(/*^block*/id)arg1 ;
-(void)revokeAccessToAllItemsForBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithAccessStore:(id)arg1 ;
-(FPDAccessControlStore *)accessStore;
-(void)setAccessStore:(FPDAccessControlStore *)arg1 ;
@end

