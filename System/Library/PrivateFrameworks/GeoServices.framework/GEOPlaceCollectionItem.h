/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOPDPlaceCollectionItem, NSString, GEOMapItemIdentifier, NSArray, NSURL;

@interface GEOPlaceCollectionItem : NSObject {

	GEOPDPlaceCollectionItem* _placeCollectionItem;

}

@property (nonatomic,readonly) NSString * itemDescription; 
@property (nonatomic,readonly) GEOMapItemIdentifier * itemIdentifier; 
@property (nonatomic,readonly) NSArray * photos; 
@property (nonatomic,readonly) BOOL supportsPhotoFallback; 
@property (nonatomic,readonly) NSURL * reviewUrl; 
-(GEOMapItemIdentifier *)itemIdentifier;
-(NSURL *)reviewUrl;
-(NSArray *)photos;
-(BOOL)supportsPhotoFallback;
-(id)description;
-(NSString *)itemDescription;
-(id)initWithPlaceCollectionItem:(id)arg1 ;
@end

