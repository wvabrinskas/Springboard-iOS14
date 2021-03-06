/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PGGraphLocalizable.h>
#import <libobjc.A.dylib/PGGraphSynonymSupport.h>

@class NSArray, NSString, PVSceneTaxonomyNode;

@interface PGGraphSceneNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport> {

	unsigned level : 8;
	NSString* _label;
	unsigned long long _level;
	PVSceneTaxonomyNode* _sceneTaxonomyNode;

}

@property (nonatomic,readonly) PVSceneTaxonomyNode * sceneTaxonomyNode;                      //@synthesize sceneTaxonomyNode=_sceneTaxonomyNode - In the implementation block
@property (nonatomic,readonly) unsigned sceneIdentifier; 
@property (nonatomic,readonly) unsigned long long level;                                     //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) BOOL isIndexed; 
@property (nonatomic,readonly) BOOL isSuitableForSuggestions; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (nonatomic,readonly) unsigned long long numberOfHighConfidenceAssets; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * localizedSynonyms; 
+(id)filter;
+(BOOL)isSceneSuitableForSuggestionsWithLabel:(id)arg1 ;
+(id)suggestionWhitelistedScenes;
+(BOOL)isSceneSuitableForSuggestionsWithIdentifier:(unsigned)arg1 confidence:(double)arg2 ;
-(BOOL)isIndexed;
-(id)label;
-(unsigned)sceneIdentifier;
-(unsigned long long)numberOfAssets;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)momentNodes;
-(NSString *)description;
-(PVSceneTaxonomyNode *)sceneTaxonomyNode;
-(NSArray *)localizedSynonyms;
-(unsigned long long)numberOfHighConfidenceAssets;
-(unsigned long long)level;
-(NSString *)localizedName;
-(unsigned short)domain;
-(BOOL)isSuitableForSuggestions;
-(void)setLocalProperties:(id)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLabel:(id)arg1 ;
@end

