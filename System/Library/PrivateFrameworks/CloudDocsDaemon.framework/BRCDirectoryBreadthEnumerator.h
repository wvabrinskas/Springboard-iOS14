/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class BRCRelativePath;

@interface BRCDirectoryBreadthEnumerator : NSObject {

	SCD_Struct_BR20* _dir;
	BRCRelativePath* _parentPath;

}
-(void)dealloc;
-(id)initWithParentPath:(id)arg1 error:(int*)arg2 ;
-(id)nextObjectWithIsDir:(BOOL*)arg1 error:(int*)arg2 ;
@end

