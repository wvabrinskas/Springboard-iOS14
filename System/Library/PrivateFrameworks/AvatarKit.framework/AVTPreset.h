/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray, NSDictionary;

@interface AVTPreset : NSObject {

	long long _category;
	NSString* _identifier;
	NSArray* _assets;
	NSString* _morphVariant;
	NSString* _imageVariant;
	NSString* _materialVariant;
	float _morphVariantIntensity;
	float _textureAssetPresence;
	BOOL _mirrored;
	NSArray* _dependencies;
	NSDictionary* _assetSpecificMorphVariantDependencies;
	NSDictionary* _assetSpecificImageVariantDependencies;
	NSDictionary* _assetSpecificMaterialVariantDependencies;
	NSDictionary* _presetSpecificPresetDependencies;
	NSDictionary* _tags;
	NSDictionary* _specializationSettings;

}

@property (nonatomic,readonly) long long category; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * displayableName; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) BOOL hasComponent; 
@property (nonatomic,readonly) NSDictionary * tags;                      //@synthesize tags=_tags - In the implementation block
@property (readonly) NSDictionary * specializationSettings;              //@synthesize specializationSettings=_specializationSettings - In the implementation block
+(id)colorPresetsForCategory:(long long)arg1 colorIndex:(unsigned long long)arg2 ;
+(id)presetWithCategory:(long long)arg1 identifier:(id)arg2 ;
+(id)availablePresetsForCategory:(long long)arg1 ;
+(id)findPresetWithIdentifier:(id)arg1 inPresets:(id)arg2 ;
+(void)loadPresets;
+(id)_colorPresetsForCategory:(long long)arg1 palette:(id)arg2 ;
+(id)colorPresetsForCategory:(long long)arg1 ;
+(id)secondaryColorPresetsForCategory:(long long)arg1 ;
-(id)assets;
-(id)cache;
-(long long)category;
-(BOOL)hasComponent;
-(id)colorPresets;
-(NSString *)identifier;
-(NSDictionary *)tags;
-(id)description;
-(NSString *)localizedName;
-(void)enumerateVariantDependenciesOfKind:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateAssetSpecificVariantDependenciesOfKind:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(NSDictionary *)specializationSettings;
-(void)rebuildSpecializationSettings;
-(NSString *)displayableName;
-(void)enumeratePresetDependencies:(/*^block*/id)arg1 ;
-(void)enumeratePresetSpecificPresetDependencies:(/*^block*/id)arg1 ;
-(void)applyPresetByChangingComponentsOfMemoji:(id)arg1 ;
@end
