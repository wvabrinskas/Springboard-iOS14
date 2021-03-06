/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface ASDStoreItemMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _propertiesDictionary;

}

@property (nonatomic,readonly) NSDictionary * propertiesDictionary;              //@synthesize propertiesDictionary=_propertiesDictionary - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) long long storeItemIdentifier; 
+(BOOL)supportsSecureCoding;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)storeTransationID;
-(NSDictionary *)propertiesDictionary;
-(id)initWithCoder:(id)arg1 ;
-(long long)storeItemIdentifier;
-(id)requiredDeviceCapabilities;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cancelDownloadURL;
@end

