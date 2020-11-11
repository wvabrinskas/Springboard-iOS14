/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, DNDClientEventSource;

@interface DNDClientEventDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _identifier;
	DNDClientEventSource* _source;
	BOOL _shouldAlwaysInterrupt;

}

@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) DNDClientEventSource * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL shouldAlwaysInterrupt;                      //@synthesize shouldAlwaysInterrupt=_shouldAlwaysInterrupt - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(DNDClientEventSource *)source;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithDetails:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)shouldAlwaysInterrupt;
-(id)_initWithIdentifier:(id)arg1 source:(id)arg2 shouldAlwaysInterrupt:(BOOL)arg3 ;
@end
