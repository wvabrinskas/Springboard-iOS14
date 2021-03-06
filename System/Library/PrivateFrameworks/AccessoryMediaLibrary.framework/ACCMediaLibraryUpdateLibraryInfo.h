/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AccessoryMediaLibrary/AccessoryMediaLibrary-Structs.h>
@class NSString;

@interface ACCMediaLibraryUpdateLibraryInfo : NSObject {

	int _type;
	NSString* _mediaLibraryUID;
	NSString* _name;

}

@property (nonatomic,retain) NSString * mediaLibraryUID;              //@synthesize mediaLibraryUID=_mediaLibraryUID - In the implementation block
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int type;                                //@synthesize type=_type - In the implementation block
-(BOOL)supportsSecureCoding;
-(void)setType:(int)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithDict:(id)arg1 ;
-(int)type;
-(void)setName:(NSString *)arg1 ;
-(id)copyDict;
-(id)initWithMediaLibrary:(id)arg1 dict:(id)arg2 ;
-(void)fillStruct:(SCD_Struct_AC3*)arg1 ;
-(void)setMediaLibraryUID:(NSString *)arg1 ;
-(NSString *)mediaLibraryUID;
-(id)initWithMediaLibrary:(id)arg1 name:(id)arg2 type:(int)arg3 ;
@end

