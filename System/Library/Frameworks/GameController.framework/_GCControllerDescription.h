/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_GCUpdatableIPCObjectDescription.h>

@protocol NSCopyingNSObjectNSSecureCoding;
@class NSArray, GCController, NSString;

@interface _GCControllerDescription : NSObject <_GCUpdatableIPCObjectDescription> {

	id<NSCopying><NSObject><NSSecureCoding> _identifier;
	NSArray* _componentDescriptions;
	GCController* _materializedController;

}

@property (nonatomic,readonly) id<NSCopying><NSObject><NSSecureCoding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)redactedDescription;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(id<NSCopying><NSObject><NSSecureCoding>)identifier;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToDescription:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)materializeWithContext:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 components:(id)arg2 ;
-(BOOL)update:(id)arg1 withContext:(id)arg2 ;
@end

