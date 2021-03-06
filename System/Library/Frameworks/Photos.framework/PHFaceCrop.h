/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHObject.h>

@class NSData;

@interface PHFaceCrop : PHObject {

	short _state;
	short _type;
	NSData* _resourceData;

}

@property (nonatomic,readonly) NSData * resourceData;              //@synthesize resourceData=_resourceData - In the implementation block
@property (nonatomic,readonly) short state;                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) short type;                         //@synthesize type=_type - In the implementation block
+(id)fetchType;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(id)fetchFaceCropsWithOptions:(id)arg1 ;
+(id)fetchFaceCropsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceCropsForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceCropsNeedingFaceDetectionWithOptions:(id)arg1 ;
+(id)fetchTransientTrainingFaceCropsForPerson:(id)arg1 options:(id)arg2 ;
+(id)_trainingFaceCropByUUIDForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceCropByFaceLocalIdentifierForFaces:(id)arg1 fetchOptions:(id)arg2 ;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)entityKeyMap;
-(short)state;
-(NSData *)resourceData;
-(Class)changeRequestClass;
-(short)type;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
@end

