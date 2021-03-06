/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SSVMediaContentTasteItem : NSObject <SSXPCCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned long long _contentType;
	NSString* _playlistGlobalID;
	long long _storeAdamID;
	unsigned long long _tasteType;

}

@property (nonatomic,readonly) unsigned long long contentType;                //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * playlistGlobalID;              //@synthesize playlistGlobalID=_playlistGlobalID - In the implementation block
@property (nonatomic,readonly) long long storeAdamID;                         //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (nonatomic,readonly) unsigned long long tasteType;                  //@synthesize tasteType=_tasteType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_copyWithMediaContentTasteItemClass:(Class)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)contentType;
-(id)initWithCoder:(id)arg1 ;
-(long long)storeAdamID;
-(NSString *)playlistGlobalID;
-(unsigned long long)tasteType;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

