/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SBLeafIcon.h>
#import <libobjc.A.dylib/SBHLibraryCategoryObserver.h>

@class SBHLibraryCategory, NSString;

@interface SBHLibraryPodCategoryIcon : SBLeafIcon <SBHLibraryCategoryObserver> {

	SBHLibraryCategory* _category;

}

@property (nonatomic,readonly) SBHLibraryCategory * category;              //@synthesize category=_category - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBHLibraryCategory *)category;
-(long long)labelAccessoryType;
-(id)initWithCategory:(id)arg1 ;
-(BOOL)isCategoryIcon;
-(void)categoryDidUpdate:(id)arg1 ;
@end

