/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PGCurationIndexSetTrait, PGCurationPartOfDayTrait, PGGraph, PGCurationSetTrait, PGCurationContentOrAestheticScoreTrait, PGCurationCropScoreTrait, NSString;

@interface PGCurationCriteria : NSObject {

	BOOL _filterUtilityAssets;
	double _minimumAssetsRatio;
	PGCurationIndexSetTrait* _compulsoryScenesTrait;
	PGCurationIndexSetTrait* _scenesTrait;
	PGCurationPartOfDayTrait* _partOfDayTrait;
	PGGraph* _graph;
	unsigned long long _faceFilter;
	PGCurationSetTrait* _peopleTrait;
	PGCurationContentOrAestheticScoreTrait* _contentOrAestheticScoreTrait;
	PGCurationCropScoreTrait* _cropScoreTrait;
	unsigned long long _client;

}

@property (nonatomic,readonly) PGGraph * graph;                                                                  //@synthesize graph=_graph - In the implementation block
@property (assign,nonatomic) double minimumAssetsRatio;                                                          //@synthesize minimumAssetsRatio=_minimumAssetsRatio - In the implementation block
@property (nonatomic,readonly) unsigned long long client;                                                        //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) unsigned long long faceFilter;                                                      //@synthesize faceFilter=_faceFilter - In the implementation block
@property (assign,nonatomic) BOOL filterUtilityAssets;                                                           //@synthesize filterUtilityAssets=_filterUtilityAssets - In the implementation block
@property (nonatomic,retain) PGCurationIndexSetTrait * scenesTrait;                                              //@synthesize scenesTrait=_scenesTrait - In the implementation block
@property (nonatomic,retain) PGCurationIndexSetTrait * compulsoryScenesTrait;                                    //@synthesize compulsoryScenesTrait=_compulsoryScenesTrait - In the implementation block
@property (nonatomic,retain) PGCurationSetTrait * peopleTrait;                                                   //@synthesize peopleTrait=_peopleTrait - In the implementation block
@property (nonatomic,retain) PGCurationPartOfDayTrait * partOfDayTrait;                                          //@synthesize partOfDayTrait=_partOfDayTrait - In the implementation block
@property (nonatomic,retain) PGCurationContentOrAestheticScoreTrait * contentOrAestheticScoreTrait;              //@synthesize contentOrAestheticScoreTrait=_contentOrAestheticScoreTrait - In the implementation block
@property (nonatomic,retain) PGCurationCropScoreTrait * cropScoreTrait;                                          //@synthesize cropScoreTrait=_cropScoreTrait - In the implementation block
@property (readonly) NSString * niceDescription; 
-(PGGraph *)graph;
-(BOOL)passesForItem:(id)arg1 score:(double*)arg2 reasonString:(id*)arg3 ;
-(void)setScenesTrait:(PGCurationIndexSetTrait *)arg1 ;
-(NSString *)niceDescription;
-(PGCurationIndexSetTrait *)compulsoryScenesTrait;
-(PGCurationContentOrAestheticScoreTrait *)contentOrAestheticScoreTrait;
-(void)setPartOfDayTrait:(PGCurationPartOfDayTrait *)arg1 ;
-(PGCurationPartOfDayTrait *)partOfDayTrait;
-(PGCurationIndexSetTrait *)scenesTrait;
-(void)setFaceFilter:(unsigned long long)arg1 ;
-(unsigned long long)client;
-(PGCurationSetTrait *)peopleTrait;
-(void)setCompulsoryScenesTrait:(PGCurationIndexSetTrait *)arg1 ;
-(void)setCropScoreTrait:(PGCurationCropScoreTrait *)arg1 ;
-(void)setFilterUtilityAssets:(BOOL)arg1 ;
-(unsigned long long)faceFilter;
-(void)setContentOrAestheticScoreTrait:(PGCurationContentOrAestheticScoreTrait *)arg1 ;
-(PGCurationCropScoreTrait *)cropScoreTrait;
-(void)setPeopleTrait:(PGCurationSetTrait *)arg1 ;
-(double)_scoreForSceneClassifications:(id)arg1 withScenesTrait:(id)arg2 traitFailed:(BOOL*)arg3 ;
-(id)peopleTraitString;
-(double)minimumAssetsRatio;
-(BOOL)filterUtilityAssets;
-(void)setMinimumAssetsRatio:(double)arg1 ;
-(id)initWithGraph:(id)arg1 minimumAssetsRatio:(double)arg2 client:(unsigned long long)arg3 ;
-(BOOL)isPassingForAsset:(id)arg1 score:(double*)arg2 ;
@end

