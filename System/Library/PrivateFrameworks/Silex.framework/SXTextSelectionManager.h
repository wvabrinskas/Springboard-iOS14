/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXTextSelectionManager.h>

@protocol SXTextSelectionManager <NSObject>
@required
-(void)addTextSelecting:(id)arg1;
-(void)clearSelection;

@end


@class NSHashTable, NSString;

@interface SXTextSelectionManager : NSObject <SXTextSelectionManager> {

	NSHashTable* _textSelecting;

}

@property (nonatomic,readonly) NSHashTable * textSelecting;              //@synthesize textSelecting=_textSelecting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSHashTable *)textSelecting;
-(void)addTextSelecting:(id)arg1 ;
-(void)clearSelection;
@end
