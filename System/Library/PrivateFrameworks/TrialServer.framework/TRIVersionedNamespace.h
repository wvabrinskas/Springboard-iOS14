/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TRIVersionedNamespace : NSObject <NSCopying, NSSecureCoding> {

	unsigned _compatibilityVersion;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
+(void)load;
+(BOOL)supportsSecureCoding;
+(id)versionedNamespaceWithName:(id)arg1 compatibilityVersion:(unsigned)arg2 ;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithReplacementCompatibilityVersion:(unsigned)arg1 ;
-(unsigned)compatibilityVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 compatibilityVersion:(unsigned)arg2 ;
-(BOOL)isEqualToVersionedNamespace:(id)arg1 ;
-(id)copyWithReplacementName:(id)arg1 ;
-(void)_swizzledEncodeWithCoder:(id)arg1 ;
@end

