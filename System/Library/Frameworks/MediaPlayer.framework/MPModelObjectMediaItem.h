/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPNondurableMediaItem.h>

@class NSDictionary, MPModelObject;

@interface MPModelObjectMediaItem : MPNondurableMediaItem {

	NSDictionary* _propertyValues;
	MPModelObject* _modelObject;
	/*^block*/id _fallbackArtworkCatalogBlock;

}

@property (nonatomic,readonly) MPModelObject * modelObject;              //@synthesize modelObject=_modelObject - In the implementation block
@property (nonatomic,copy) id fallbackArtworkCatalogBlock;               //@synthesize fallbackArtworkCatalogBlock=_fallbackArtworkCatalogBlock - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithModelObject:(id)arg1 ;
-(id)fallbackArtworkCatalogBlock;
-(void)setFallbackArtworkCatalogBlock:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(MPModelObject *)modelObject;
-(BOOL)isEqual:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
