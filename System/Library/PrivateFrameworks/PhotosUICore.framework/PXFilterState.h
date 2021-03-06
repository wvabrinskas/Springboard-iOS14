/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol PXFilterState <NSCopying>
@property (nonatomic,readonly) BOOL isFiltering; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) NSString * localizedFooterDescription; 
@required
-(NSString *)localizedDescription;
-(BOOL)isFiltering;
-(NSString *)localizedFooterDescription;
-(id)predicateForUseCase:(unsigned long long)arg1;

@end

