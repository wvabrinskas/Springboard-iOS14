/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface SKUIMenuPageSectionContext : NSObject {

	NSMutableDictionary* _sections;
	long long _selectedIndex;

}

@property (assign,nonatomic) long long selectedIndex;              //@synthesize selectedIndex=_selectedIndex - In the implementation block
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(id)sectionsForIndex:(long long)arg1 ;
-(void)setSections:(id)arg1 forIndex:(long long)arg2 ;
@end
