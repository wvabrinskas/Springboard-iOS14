/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARDaemonSecureCoding.h>
#import <ARKitCore/ARAnchorCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface ARAnchor : NSObject <ARDaemonSecureCoding, ARAnchorCopying, NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _name;
	NSUUID* _sessionIdentifier;
	double _lastUpdateTimestamp;
	SCD_Struct_AR1 _transform;
	SCD_Struct_AR1 _referenceTransform;

}

@property (nonatomic,retain) NSUUID * sessionIdentifier;                     //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 transform;                       //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 referenceTransform;              //@synthesize referenceTransform=_referenceTransform - In the implementation block
@property (assign,nonatomic) double lastUpdateTimestamp;                     //@synthesize lastUpdateTimestamp=_lastUpdateTimestamp - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugQuickLookObject;
-(void)setTransform:(SCD_Struct_AR1)arg1 ;
-(SCD_Struct_AR1)transform;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)name;
-(NSUUID *)sessionIdentifier;
-(void)setSessionIdentifier:(NSUUID *)arg1 ;
-(id)description;
-(id)initWithTransform:(SCD_Struct_AR1)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_description:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLastUpdateTimestamp:(double)arg1 ;
-(double)lastUpdateTimestamp;
-(BOOL)isEqualToAnchor:(id)arg1 ;
-(SCD_Struct_AR1)referenceTransform;
-(id)initWithName:(id)arg1 transform:(SCD_Struct_AR1)arg2 ;
-(id)initWithIdentifier:(id)arg1 transform:(SCD_Struct_AR1)arg2 ;
-(void)setReferenceTransform:(SCD_Struct_AR1)arg1 ;
@end

