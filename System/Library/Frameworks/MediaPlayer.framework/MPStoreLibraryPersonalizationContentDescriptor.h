/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPModelObject;

@interface MPStoreLibraryPersonalizationContentDescriptor : NSObject {

	MPModelObject* _model;
	long long _personalizationStyle;

}

@property (nonatomic,readonly) MPModelObject * model;                       //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) long long personalizationStyle;              //@synthesize personalizationStyle=_personalizationStyle - In the implementation block
+(id)_lightweightPersonalizationPropertiesForStoreAsset;
+(id)lightweightPersonalizationPropertiesForModelClass:(Class)arg1 ;
+(id)_lightweightPersonalizationPropertiesForPlaybackPosition;
-(long long)personalizationStyle;
-(MPModelObject *)model;
-(id)initWithModel:(id)arg1 personalizationStyle:(long long)arg2 ;
@end

