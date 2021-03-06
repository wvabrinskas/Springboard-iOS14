/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PGHighlightModel;
@class NSString, PHAsset, NSArray, NSDictionary, NSMapTable;

@interface PGHighlightEnrichmentValues : NSObject {

	BOOL _clearCurations;
	unsigned short _enrichmentState;
	id<PGHighlightModel> _highlight;
	double _promotionScore;
	NSString* _smartDescription;
	NSString* _dateDescription;
	NSString* _verboseSmartDescription;
	PHAsset* _keyAsset;
	NSArray* _extendedCuration;
	NSDictionary* _curatedAssetsByCurationType;
	NSDictionary* _momentTitleByMomentUUID;
	unsigned long long _mood;
	NSMapTable* _visibilityScoreByAsset;

}

@property (readonly) id<PGHighlightModel> highlight;                                  //@synthesize highlight=_highlight - In the implementation block
@property (assign,nonatomic) BOOL clearCurations;                                     //@synthesize clearCurations=_clearCurations - In the implementation block
@property (assign,nonatomic) double promotionScore;                                   //@synthesize promotionScore=_promotionScore - In the implementation block
@property (nonatomic,copy) NSString * smartDescription;                               //@synthesize smartDescription=_smartDescription - In the implementation block
@property (nonatomic,copy) NSString * dateDescription;                                //@synthesize dateDescription=_dateDescription - In the implementation block
@property (nonatomic,copy) NSString * verboseSmartDescription;                        //@synthesize verboseSmartDescription=_verboseSmartDescription - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset;                                      //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) NSArray * extendedCuration;                              //@synthesize extendedCuration=_extendedCuration - In the implementation block
@property (nonatomic,retain) NSDictionary * curatedAssetsByCurationType;              //@synthesize curatedAssetsByCurationType=_curatedAssetsByCurationType - In the implementation block
@property (nonatomic,retain) NSDictionary * momentTitleByMomentUUID;                  //@synthesize momentTitleByMomentUUID=_momentTitleByMomentUUID - In the implementation block
@property (assign,nonatomic) unsigned long long mood;                                 //@synthesize mood=_mood - In the implementation block
@property (nonatomic,retain) NSMapTable * visibilityScoreByAsset;                     //@synthesize visibilityScoreByAsset=_visibilityScoreByAsset - In the implementation block
@property (assign,nonatomic) unsigned short enrichmentState;                          //@synthesize enrichmentState=_enrichmentState - In the implementation block
@property (readonly) BOOL hasChanges; 
-(unsigned long long)mood;
-(BOOL)hasChanges;
-(void)setMood:(unsigned long long)arg1 ;
-(void)setDateDescription:(NSString *)arg1 ;
-(double)promotionScore;
-(NSString *)smartDescription;
-(void)setSmartDescription:(NSString *)arg1 ;
-(NSString *)verboseSmartDescription;
-(void)setVerboseSmartDescription:(NSString *)arg1 ;
-(void)setPromotionScore:(double)arg1 ;
-(unsigned short)enrichmentState;
-(void)setEnrichmentState:(unsigned short)arg1 ;
-(id<PGHighlightModel>)highlight;
-(PHAsset *)keyAsset;
-(NSString *)dateDescription;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(id)initWithHighlight:(id)arg1 ;
-(BOOL)clearCurations;
-(void)setClearCurations:(BOOL)arg1 ;
-(NSArray *)extendedCuration;
-(void)setExtendedCuration:(NSArray *)arg1 ;
-(NSDictionary *)curatedAssetsByCurationType;
-(void)setCuratedAssetsByCurationType:(NSDictionary *)arg1 ;
-(NSDictionary *)momentTitleByMomentUUID;
-(void)setMomentTitleByMomentUUID:(NSDictionary *)arg1 ;
-(NSMapTable *)visibilityScoreByAsset;
-(void)setVisibilityScoreByAsset:(NSMapTable *)arg1 ;
@end

