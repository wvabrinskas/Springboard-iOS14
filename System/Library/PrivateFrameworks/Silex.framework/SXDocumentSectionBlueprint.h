/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXDocumentSectionBlueprint.h>
@class NSArray;


@protocol SXDocumentSectionBlueprint <NSObject>
@property (nonatomic,readonly) NSArray * items; 
@required
-(NSArray *)items;

@end


@class NSArray, NSString;

@interface SXDocumentSectionBlueprint : NSObject <SXDocumentSectionBlueprint> {

	NSArray* _items;

}

@property (nonatomic,readonly) NSArray * items;                     //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)blueprintWithItems:(id)arg1 ;
-(NSArray *)items;
@end

