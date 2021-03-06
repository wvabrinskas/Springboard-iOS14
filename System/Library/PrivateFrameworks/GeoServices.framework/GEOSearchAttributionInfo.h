/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOSearchAttributionSource, NSArray, NSString;

@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding> {

	GEOSearchAttributionSource* _source;
	NSArray* _logoPaths;
	NSArray* _snippetLogoPaths;
	NSString* _displayName;
	unsigned _attributionRequirementsMask;

}

@property (nonatomic,readonly) GEOSearchAttributionSource * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned version; 
@property (nonatomic,readonly) unsigned requirementsMask;                        //@synthesize attributionRequirementsMask=_attributionRequirementsMask - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL shouldOpenInAppStore; 
@property (nonatomic,readonly) NSString * webBaseActionURL; 
@property (nonatomic,readonly) NSArray * attributionApps; 
@property (nonatomic,readonly) NSString * appAdamID; 
+(BOOL)supportsSecureCoding;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)snippetLogoPathForScale:(double)arg1 ;
-(NSString *)appAdamID;
-(unsigned)version;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)identifier;
-(unsigned)requirementsMask;
-(NSString *)displayName;
-(id)description;
-(BOOL)hasAttributionRequirement:(int)arg1 ;
-(id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4 ;
-(GEOSearchAttributionSource *)source;
-(BOOL)supportsActionURLs;
-(BOOL)shouldOpenInAppStore;
-(id)initWithCoder:(id)arg1 ;
-(id)logoPathForScale:(double)arg1 ;
-(NSString *)webBaseActionURL;
-(void)addLogoPath:(id)arg1 ;
-(NSArray *)attributionApps;
@end

