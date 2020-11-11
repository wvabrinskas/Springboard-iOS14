/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HelpKit/HLPHelpItem.h>

@class NSArray;

@interface HLPHelpSectionItem : HLPHelpItem {

	BOOL _open;
	NSArray* _children;

}

@property (assign,getter=isOpen,nonatomic) BOOL open;              //@synthesize open=_open - In the implementation block
@property (nonatomic,copy) NSArray * children;                     //@synthesize children=_children - In the implementation block
-(NSArray *)children;
-(void)setOpen:(BOOL)arg1 ;
-(BOOL)isOpen;
-(id)debugDescription;
-(void)setChildren:(NSArray *)arg1 ;
@end
