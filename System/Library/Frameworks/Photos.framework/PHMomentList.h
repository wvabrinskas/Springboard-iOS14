/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHCollectionList.h>

@class NSDate;

@interface PHMomentList : PHCollectionList {

	short _granularityLevel;
	int _sortIndex;
	NSDate* _representativeDate;

}

@property (nonatomic,readonly) int sortIndex;                            //@synthesize sortIndex=_sortIndex - In the implementation block
@property (nonatomic,readonly) short granularityLevel;                   //@synthesize granularityLevel=_granularityLevel - In the implementation block
@property (nonatomic,readonly) NSDate * representativeDate;              //@synthesize representativeDate=_representativeDate - In the implementation block
+(id)fetchType;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)entityKeyMap;
-(id)localizedTitle;
-(int)sortIndex;
-(NSDate *)representativeDate;
-(id)localizedLocationNames;
-(short)granularityLevel;
-(BOOL)collectionHasFixedOrder;
-(Class)changeRequestClass;
-(id)description;
-(BOOL)hasLocalizedTitle;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(BOOL)hasLocationInfo;
-(long long)collectionListType;
@end

