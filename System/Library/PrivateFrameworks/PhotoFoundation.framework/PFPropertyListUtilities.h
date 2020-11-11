/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PFPropertyListUtilities : NSObject
+(id)arrayFromEncodedData:(id)arg1 ;
+(id)propertyListObjectFromEncodedData:(id)arg1 expectedClass:(Class)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)propertyListObjectFromEncodedData:(id)arg1 expectedClass:(Class)arg2 options:(unsigned long long)arg3 ;
+(id)dictionaryFromEncodedData:(id)arg1 ;
+(id)mutableDictionaryFromEncodedData:(id)arg1 ;
+(id)mutableArrayFromEncodedData:(id)arg1 ;
+(id)encodedDataWithPropertyListObject:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)encodedDataWithPropertyListObject:(id)arg1 ;
+(id)_filterDictionary:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)_filterArray:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)filterPropertyList:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)filterPropertyList:(id)arg1 ;
+(id)filterPropertyListNoData:(id)arg1 ;
+(BOOL)canEncodeInPropertyList:(id)arg1 ;
@end
