/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MKCollectionDataProvider <NSObject>
@optional
-(id)collections;
-(long long)numberOfSections;
-(id)geoCollectionAtIndex:(long long)arg1;
-(id)collectionAtIndex:(long long)arg1;
-(long long)numberOfCollections;

@required
-(void)refreshCollections;
-(void)displayCollections;

@end

