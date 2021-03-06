/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOSimpleTileRequesterSubclass
@optional
-(BOOL)tileDataIsCacheableForTileKey:(const GEOTileKey*)arg1;
-(id)editionHeader;
-(BOOL)needsLocalizationForKey:(const GEOTileKey*)arg1;
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1;
-(BOOL)shouldAllowEmptyDataForTileKey:(const GEOTileKey*)arg1;
-(void)failedLoadingTileForKey:(GEOTileKey)arg1 baseOperation:(id)arg2 error:(id)arg3;
-(id)processTileData:(id)arg1 forKey:(const GEOTileKey*)arg2 error:(id*)arg3;
-(id)localizationURLForTileKey:(const GEOTileKey*)arg1;
-(BOOL)downloadsDataToDisk;
-(void)finishedLoadingTileForKey:(GEOTileKey)arg1 baseOperation:(id)arg2;
-(id)newXPCDataRequestForTileKey:(const GEOTileKey*)arg1;
-(id)mergeBaseTileEtag:(id)arg1 withLocalizationTileEtag:(id)arg2;
-(id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2;
-(int)checksumMethodForIncomingTileDataWithKey:(const GEOTileKey*)arg1;
-(SCD_Struct_GE4*)kindForTileKey:(const GEOTileKey*)arg1;

@required
-(id)urlForTileKey:(const GEOTileKey*)arg1;

@end

