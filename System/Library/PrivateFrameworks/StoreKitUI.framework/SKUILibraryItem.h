/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SKUIStoreIdentifier, NSString, NSNumber;

@interface SKUILibraryItem : NSObject <NSCopying> {

	SKUIStoreIdentifier* _storeIdentifier;
	NSString* _storeFlavorIdentifier;

}

@property (nonatomic,copy) SKUIStoreIdentifier * storeIdentifier;              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * storeItemIdentifier; 
@property (nonatomic,copy) NSString * storeFlavorIdentifier;                   //@synthesize storeFlavorIdentifier=_storeFlavorIdentifier - In the implementation block
-(SKUIStoreIdentifier *)storeIdentifier;
-(unsigned long long)hash;
-(void)setStoreIdentifier:(SKUIStoreIdentifier *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)storeItemIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)storeFlavorIdentifier;
-(void)setStoreFlavorIdentifier:(NSString *)arg1 ;
@end

