/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDDocument, NSString, NSMutableArray;

@interface WDListDefinition : NSObject <NSCopying> {

	WDDocument* mDocument;
	int mListDefinitionId;
	NSString* mStyleId;
	NSString* mStyleRefId;
	int mType;
	NSMutableArray* mLevels;

}

@property (nonatomic,readonly) int listDefinitionId; 
@property (nonatomic,readonly) NSString * styleId; 
@property (nonatomic,copy) NSString * styleRefId; 
-(void)setType:(int)arg1 ;
-(int)levelCount;
-(id)description;
-(int)type;
-(NSString *)styleId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)listDefinitionId;
-(id)levelAt:(int)arg1 ;
-(id)addLevel;
-(void)removeLastLevel;
-(id)initWithDocument:(id)arg1 listDefinitionId:(int)arg2 styleId:(id)arg3 ;
-(NSString *)styleRefId;
-(void)setStyleRefId:(NSString *)arg1 ;
@end
