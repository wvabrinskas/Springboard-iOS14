/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface ECMappingContext : NSObject {

	map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >* mIndexToMappedIndex;
	NSMutableDictionary* mSheetNameToMappedIndex;
	CFDictionaryRef mObjectToMappingInfo;
	NSMutableArray* mMappingInfos;

}
+(id)mappingContext;
-(id)init;
-(void)dealloc;
-(unsigned long long)mappingInfoCount;
-(ChVector<OcText>*)mappedSheetNames;
-(unsigned long long)mappedSheetIndexForSheetIndex:(unsigned long long)arg1 ;
-(unsigned long long)mappedSheetIndexForSheetName:(id)arg1 ;
-(id)mappingInfoForObject:(id)arg1 ;
-(id)mappingInfoAtIndex:(unsigned long long)arg1 ;
-(void)associateMappingInfo:(id)arg1 withSheetName:(id)arg2 andSheetIndex:(unsigned long long)arg3 andObject:(id)arg4 ;
@end
