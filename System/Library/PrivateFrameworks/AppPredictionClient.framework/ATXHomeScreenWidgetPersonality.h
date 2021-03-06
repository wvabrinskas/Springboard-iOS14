/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXHomeScreenWidgetPersonalityProviding.h>

@class NSString;

@interface ATXHomeScreenWidgetPersonality : NSObject <NSSecureCoding, ATXHomeScreenWidgetPersonalityProviding> {

	NSString* _extensionBundleId;
	NSString* _kind;

}

@property (nonatomic,readonly) NSString * extensionBundleId;                    //@synthesize extensionBundleId=_extensionBundleId - In the implementation block
@property (nonatomic,readonly) NSString * kind;                                 //@synthesize kind=_kind - In the implementation block
@property (readonly) ATXHomeScreenWidgetPersonality * personality; 
+(BOOL)supportsSecureCoding;
+(id)stringRepresentationForExtensionBundleId:(id)arg1 kind:(id)arg2 ;
+(id)widgetBundleIdForWidgetPersonalityStringRepresentation:(id)arg1 ;
+(id)widgetKindForWidgetPersonalityStringRepresentation:(id)arg1 ;
-(NSString *)kind;
-(id)stringRepresentation;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(ATXHomeScreenWidgetPersonality *)personality;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)extensionBundleId;
-(id)initWithExtensionBundleId:(id)arg1 kind:(id)arg2 ;
@end

