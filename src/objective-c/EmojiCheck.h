//
//  EmojiCheck.h
//  
#import <Foundation/Foundation.h>

/** iOSの絵文字を処理するクラス
 */

@interface EmojiCheck : NSObject

/** NSString から絵文字を取り除いた NSString を得る
 *  @param  string 絵文字を取り除きたい NSString
 *  @return 絵文字が除去された NSString
 */
+(NSString*)removeEmoji:(NSString*)string;


@end
