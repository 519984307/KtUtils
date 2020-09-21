﻿#ifndef KT_UTILS_ICONHELPER_H
#define KT_UTILS_ICONHELPER_H

#include "global.h"

namespace KtUtils {
/**
 * \brief Generate QPixmap and QIcon for icons in Font Awesome
 *        (https://fontawesome.com/).
 */
class KT_UTILS_EXPORT IconHelper : public QObject {
  Q_OBJECT
 public:
  /**
   * \brief Icon enum comes from Font Awesome(https://fontawesome.com/).
   */
  enum Icon {
    Brands_500px,
    Brands_accessible_icon,
    Brands_accusoft,
    Brands_acquisitions_incorporated,
    Brands_adn,
    Brands_adobe,
    Brands_adversal,
    Brands_affiliatetheme,
    Brands_airbnb,
    Brands_algolia,
    Brands_alipay,
    Brands_amazon,
    Brands_amazon_pay,
    Brands_amilia,
    Brands_android,
    Brands_angellist,
    Brands_angrycreative,
    Brands_angular,
    Brands_apper,
    Brands_apple,
    Brands_apple_pay,
    Brands_app_store,
    Brands_app_store_ios,
    Brands_artstation,
    Brands_asymmetrik,
    Brands_atlassian,
    Brands_audible,
    Brands_autoprefixer,
    Brands_avianex,
    Brands_aviato,
    Brands_aws,
    Brands_bandcamp,
    Brands_battle_net,
    Brands_behance,
    Brands_behance_square,
    Brands_bimobject,
    Brands_bitbucket,
    Brands_bitcoin,
    Brands_bity,
    Brands_blackberry,
    Brands_black_tie,
    Brands_blogger,
    Brands_blogger_b,
    Brands_bluetooth,
    Brands_bluetooth_b,
    Brands_bootstrap,
    Brands_btc,
    Brands_buffer,
    Brands_buromobelexperte,
    Brands_buy_n_large,
    Brands_buysellads,
    Brands_canadian_maple_leaf,
    Brands_cc_amazon_pay,
    Brands_cc_amex,
    Brands_cc_apple_pay,
    Brands_cc_diners_club,
    Brands_cc_discover,
    Brands_cc_jcb,
    Brands_cc_mastercard,
    Brands_cc_paypal,
    Brands_cc_stripe,
    Brands_cc_visa,
    Brands_centercode,
    Brands_centos,
    Brands_chrome,
    Brands_chromecast,
    Brands_cloudscale,
    Brands_cloudsmith,
    Brands_cloudversify,
    Brands_codepen,
    Brands_codiepie,
    Brands_confluence,
    Brands_connectdevelop,
    Brands_contao,
    Brands_cotton_bureau,
    Brands_cpanel,
    Brands_creative_commons,
    Brands_creative_commons_by,
    Brands_creative_commons_nc,
    Brands_creative_commons_nc_eu,
    Brands_creative_commons_nc_jp,
    Brands_creative_commons_nd,
    Brands_creative_commons_pd,
    Brands_creative_commons_pd_alt,
    Brands_creative_commons_remix,
    Brands_creative_commons_sa,
    Brands_creative_commons_sampling,
    Brands_creative_commons_sampling_plus,
    Brands_creative_commons_share,
    Brands_creative_commons_zero,
    Brands_critical_role,
    Brands_css3,
    Brands_css3_alt,
    Brands_cuttlefish,
    Brands_d_and_d,
    Brands_d_and_d_beyond,
    Brands_dashcube,
    Brands_delicious,
    Brands_deploydog,
    Brands_deskpro,
    Brands_dev,
    Brands_deviantart,
    Brands_dhl,
    Brands_diaspora,
    Brands_digg,
    Brands_digital_ocean,
    Brands_discord,
    Brands_discourse,
    Brands_dochub,
    Brands_docker,
    Brands_draft2digital,
    Brands_dribbble,
    Brands_dribbble_square,
    Brands_dropbox,
    Brands_drupal,
    Brands_dyalog,
    Brands_earlybirds,
    Brands_ebay,
    Brands_edge,
    Brands_elementor,
    Brands_ello,
    Brands_ember,
    Brands_empire,
    Brands_envira,
    Brands_erlang,
    Brands_ethereum,
    Brands_etsy,
    Brands_evernote,
    Brands_expeditedssl,
    Brands_facebook,
    Brands_facebook_f,
    Brands_facebook_messenger,
    Brands_facebook_square,
    Brands_fantasy_flight_games,
    Brands_fedex,
    Brands_fedora,
    Brands_figma,
    Brands_firefox,
    Brands_firstdraft,
    Brands_first_order,
    Brands_first_order_alt,
    Brands_flickr,
    Brands_flipboard,
    Brands_fly,
    Brands_font_awesome,
    Brands_font_awesome_alt,
    Brands_font_awesome_flag,
    Brands_font_awesome_logo_full,
    Brands_fonticons,
    Brands_fonticons_fi,
    Brands_fort_awesome,
    Brands_fort_awesome_alt,
    Brands_forumbee,
    Brands_foursquare,
    Brands_freebsd,
    Brands_free_code_camp,
    Brands_fulcrum,
    Brands_galactic_republic,
    Brands_galactic_senate,
    Brands_get_pocket,
    Brands_gg,
    Brands_gg_circle,
    Brands_git,
    Brands_git_alt,
    Brands_github,
    Brands_github_alt,
    Brands_github_square,
    Brands_gitkraken,
    Brands_gitlab,
    Brands_git_square,
    Brands_gitter,
    Brands_glide,
    Brands_glide_g,
    Brands_gofore,
    Brands_goodreads,
    Brands_goodreads_g,
    Brands_google,
    Brands_google_drive,
    Brands_google_play,
    Brands_google_plus,
    Brands_google_plus_g,
    Brands_google_plus_square,
    Brands_google_wallet,
    Brands_gratipay,
    Brands_grav,
    Brands_gripfire,
    Brands_grunt,
    Brands_gulp,
    Brands_hacker_news,
    Brands_hacker_news_square,
    Brands_hackerrank,
    Brands_hips,
    Brands_hire_a_helper,
    Brands_hooli,
    Brands_hornbill,
    Brands_hotjar,
    Brands_houzz,
    Brands_html5,
    Brands_hubspot,
    Brands_imdb,
    Brands_instagram,
    Brands_intercom,
    Brands_internet_explorer,
    Brands_invision,
    Brands_ioxhost,
    Brands_itch_io,
    Brands_itunes,
    Brands_itunes_note,
    Brands_java,
    Brands_jedi_order,
    Brands_jenkins,
    Brands_jira,
    Brands_joget,
    Brands_joomla,
    Brands_js,
    Brands_jsfiddle,
    Brands_js_square,
    Brands_kaggle,
    Brands_keybase,
    Brands_keycdn,
    Brands_kickstarter,
    Brands_kickstarter_k,
    Brands_korvue,
    Brands_laravel,
    Brands_lastfm,
    Brands_lastfm_square,
    Brands_leanpub,
    Brands_less,
    Brands_line,
    Brands_linkedin,
    Brands_linkedin_in,
    Brands_linode,
    Brands_linux,
    Brands_lyft,
    Brands_magento,
    Brands_mailchimp,
    Brands_mandalorian,
    Brands_markdown,
    Brands_mastodon,
    Brands_maxcdn,
    Brands_mdb,
    Brands_medapps,
    Brands_medium,
    Brands_medium_m,
    Brands_medrt,
    Brands_meetup,
    Brands_megaport,
    Brands_mendeley,
    Brands_microsoft,
    Brands_mix,
    Brands_mixcloud,
    Brands_mizuni,
    Brands_modx,
    Brands_monero,
    Brands_napster,
    Brands_neos,
    Brands_nimblr,
    Brands_node,
    Brands_node_js,
    Brands_npm,
    Brands_ns8,
    Brands_nutritionix,
    Brands_odnoklassniki,
    Brands_odnoklassniki_square,
    Brands_old_republic,
    Brands_opencart,
    Brands_openid,
    Brands_opera,
    Brands_optin_monster,
    Brands_orcid,
    Brands_osi,
    Brands_page4,
    Brands_pagelines,
    Brands_palfed,
    Brands_patreon,
    Brands_paypal,
    Brands_penny_arcade,
    Brands_periscope,
    Brands_phabricator,
    Brands_phoenix_framework,
    Brands_phoenix_squadron,
    Brands_php,
    Brands_pied_piper,
    Brands_pied_piper_alt,
    Brands_pied_piper_hat,
    Brands_pied_piper_pp,
    Brands_pinterest,
    Brands_pinterest_p,
    Brands_pinterest_square,
    Brands_playstation,
    Brands_product_hunt,
    Brands_pushed,
    Brands_python,
    Brands_qq,
    Brands_quinscape,
    Brands_quora,
    Brands_raspberry_pi,
    Brands_ravelry,
    Brands_react,
    Brands_reacteurope,
    Brands_readme,
    Brands_rebel,
    Brands_reddit,
    Brands_reddit_alien,
    Brands_reddit_square,
    Brands_redhat,
    Brands_red_river,
    Brands_renren,
    Brands_replyd,
    Brands_researchgate,
    Brands_resolving,
    Brands_rev,
    Brands_rocketchat,
    Brands_rockrms,
    Brands_r_project,
    Brands_safari,
    Brands_salesforce,
    Brands_sass,
    Brands_schlix,
    Brands_scribd,
    Brands_searchengin,
    Brands_sellcast,
    Brands_sellsy,
    Brands_servicestack,
    Brands_shirtsinbulk,
    Brands_shopware,
    Brands_simplybuilt,
    Brands_sistrix,
    Brands_sith,
    Brands_sketch,
    Brands_skyatlas,
    Brands_skype,
    Brands_slack,
    Brands_slack_hash,
    Brands_slideshare,
    Brands_snapchat,
    Brands_snapchat_ghost,
    Brands_snapchat_square,
    Brands_soundcloud,
    Brands_sourcetree,
    Brands_speakap,
    Brands_speaker_deck,
    Brands_spotify,
    Brands_squarespace,
    Brands_stack_exchange,
    Brands_stack_overflow,
    Brands_stackpath,
    Brands_staylinked,
    Brands_steam,
    Brands_steam_square,
    Brands_steam_symbol,
    Brands_sticker_mule,
    Brands_strava,
    Brands_stripe,
    Brands_stripe_s,
    Brands_studiovinari,
    Brands_stumbleupon,
    Brands_stumbleupon_circle,
    Brands_superpowers,
    Brands_supple,
    Brands_suse,
    Brands_swift,
    Brands_symfony,
    Brands_teamspeak,
    Brands_telegram,
    Brands_telegram_plane,
    Brands_tencent_weibo,
    Brands_themeco,
    Brands_themeisle,
    Brands_the_red_yeti,
    Brands_think_peaks,
    Brands_trade_federation,
    Brands_trello,
    Brands_tripadvisor,
    Brands_tumblr,
    Brands_tumblr_square,
    Brands_twitch,
    Brands_twitter,
    Brands_twitter_square,
    Brands_typo3,
    Brands_uber,
    Brands_ubuntu,
    Brands_uikit,
    Brands_umbraco,
    Brands_uniregistry,
    Brands_untappd,
    Brands_ups,
    Brands_usb,
    Brands_usps,
    Brands_ussunnah,
    Brands_vaadin,
    Brands_viacoin,
    Brands_viadeo,
    Brands_viadeo_square,
    Brands_viber,
    Brands_vimeo,
    Brands_vimeo_square,
    Brands_vimeo_v,
    Brands_vine,
    Brands_vk,
    Brands_vnv,
    Brands_vuejs,
    Brands_waze,
    Brands_weebly,
    Brands_weibo,
    Brands_weixin,
    Brands_whatsapp,
    Brands_whatsapp_square,
    Brands_whmcs,
    Brands_wikipedia_w,
    Brands_windows,
    Brands_wix,
    Brands_wizards_of_the_coast,
    Brands_wolf_pack_battalion,
    Brands_wordpress,
    Brands_wordpress_simple,
    Brands_wpbeginner,
    Brands_wpexplorer,
    Brands_wpforms,
    Brands_wpressr,
    Brands_xbox,
    Brands_xing,
    Brands_xing_square,
    Brands_yahoo,
    Brands_yammer,
    Brands_yandex,
    Brands_yandex_international,
    Brands_yarn,
    Brands_y_combinator,
    Brands_yelp,
    Brands_yoast,
    Brands_youtube,
    Brands_youtube_square,
    Brands_zhihu,
    Regular_address_book,
    Regular_address_card,
    Regular_angry,
    Regular_arrow_alt_circle_down,
    Regular_arrow_alt_circle_left,
    Regular_arrow_alt_circle_right,
    Regular_arrow_alt_circle_up,
    Regular_bell,
    Regular_bell_slash,
    Regular_bookmark,
    Regular_building,
    Regular_calendar,
    Regular_calendar_alt,
    Regular_calendar_check,
    Regular_calendar_minus,
    Regular_calendar_plus,
    Regular_calendar_times,
    Regular_caret_square_down,
    Regular_caret_square_left,
    Regular_caret_square_right,
    Regular_caret_square_up,
    Regular_chart_bar,
    Regular_check_circle,
    Regular_check_square,
    Regular_circle,
    Regular_clipboard,
    Regular_clock,
    Regular_clone,
    Regular_closed_captioning,
    Regular_comment,
    Regular_comment_alt,
    Regular_comment_dots,
    Regular_comments,
    Regular_compass,
    Regular_copy,
    Regular_copyright,
    Regular_credit_card,
    Regular_dizzy,
    Regular_dot_circle,
    Regular_edit,
    Regular_envelope,
    Regular_envelope_open,
    Regular_eye,
    Regular_eye_slash,
    Regular_file,
    Regular_file_alt,
    Regular_file_archive,
    Regular_file_audio,
    Regular_file_code,
    Regular_file_excel,
    Regular_file_image,
    Regular_file_pdf,
    Regular_file_powerpoint,
    Regular_file_video,
    Regular_file_word,
    Regular_flag,
    Regular_flushed,
    Regular_folder,
    Regular_folder_open,
    Regular_font_awesome_logo_full,
    Regular_frown,
    Regular_frown_open,
    Regular_futbol,
    Regular_gem,
    Regular_grimace,
    Regular_grin,
    Regular_grin_alt,
    Regular_grin_beam,
    Regular_grin_beam_sweat,
    Regular_grin_hearts,
    Regular_grin_squint,
    Regular_grin_squint_tears,
    Regular_grin_stars,
    Regular_grin_tears,
    Regular_grin_tongue,
    Regular_grin_tongue_squint,
    Regular_grin_tongue_wink,
    Regular_grin_wink,
    Regular_hand_lizard,
    Regular_hand_paper,
    Regular_hand_peace,
    Regular_hand_point_down,
    Regular_hand_pointer,
    Regular_hand_point_left,
    Regular_hand_point_right,
    Regular_hand_point_up,
    Regular_hand_rock,
    Regular_hand_scissors,
    Regular_handshake,
    Regular_hand_spock,
    Regular_hdd,
    Regular_heart,
    Regular_hospital,
    Regular_hourglass,
    Regular_id_badge,
    Regular_id_card,
    Regular_image,
    Regular_images,
    Regular_keyboard,
    Regular_kiss,
    Regular_kiss_beam,
    Regular_kiss_wink_heart,
    Regular_laugh,
    Regular_laugh_beam,
    Regular_laugh_squint,
    Regular_laugh_wink,
    Regular_lemon,
    Regular_life_ring,
    Regular_lightbulb,
    Regular_list_alt,
    Regular_map,
    Regular_meh,
    Regular_meh_blank,
    Regular_meh_rolling_eyes,
    Regular_minus_square,
    Regular_money_bill_alt,
    Regular_moon,
    Regular_newspaper,
    Regular_object_group,
    Regular_object_ungroup,
    Regular_paper_plane,
    Regular_pause_circle,
    Regular_play_circle,
    Regular_plus_square,
    Regular_question_circle,
    Regular_registered,
    Regular_sad_cry,
    Regular_sad_tear,
    Regular_save,
    Regular_share_square,
    Regular_smile,
    Regular_smile_beam,
    Regular_smile_wink,
    Regular_snowflake,
    Regular_square,
    Regular_star,
    Regular_star_half,
    Regular_sticky_note,
    Regular_stop_circle,
    Regular_sun,
    Regular_surprise,
    Regular_thumbs_down,
    Regular_thumbs_up,
    Regular_times_circle,
    Regular_tired,
    Regular_trash_alt,
    Regular_user,
    Regular_user_circle,
    Regular_window_close,
    Regular_window_maximize,
    Regular_window_minimize,
    Regular_window_restore,
    Solid_ad,
    Solid_address_book,
    Solid_address_card,
    Solid_adjust,
    Solid_air_freshener,
    Solid_align_center,
    Solid_align_justify,
    Solid_align_left,
    Solid_align_right,
    Solid_allergies,
    Solid_ambulance,
    Solid_american_sign_language_interpreting,
    Solid_anchor,
    Solid_angle_double_down,
    Solid_angle_double_left,
    Solid_angle_double_right,
    Solid_angle_double_up,
    Solid_angle_down,
    Solid_angle_left,
    Solid_angle_right,
    Solid_angle_up,
    Solid_angry,
    Solid_ankh,
    Solid_apple_alt,
    Solid_archive,
    Solid_archway,
    Solid_arrow_alt_circle_down,
    Solid_arrow_alt_circle_left,
    Solid_arrow_alt_circle_right,
    Solid_arrow_alt_circle_up,
    Solid_arrow_circle_down,
    Solid_arrow_circle_left,
    Solid_arrow_circle_right,
    Solid_arrow_circle_up,
    Solid_arrow_down,
    Solid_arrow_left,
    Solid_arrow_right,
    Solid_arrows_alt,
    Solid_arrows_alt_h,
    Solid_arrows_alt_v,
    Solid_arrow_up,
    Solid_assistive_listening_systems,
    Solid_asterisk,
    Solid_at,
    Solid_atlas,
    Solid_atom,
    Solid_audio_description,
    Solid_award,
    Solid_baby,
    Solid_baby_carriage,
    Solid_backspace,
    Solid_backward,
    Solid_bacon,
    Solid_balance_scale,
    Solid_balance_scale_left,
    Solid_balance_scale_right,
    Solid_ban,
    Solid_band_aid,
    Solid_barcode,
    Solid_bars,
    Solid_baseball_ball,
    Solid_basketball_ball,
    Solid_bath,
    Solid_battery_empty,
    Solid_battery_full,
    Solid_battery_half,
    Solid_battery_quarter,
    Solid_battery_three_quarters,
    Solid_bed,
    Solid_beer,
    Solid_bell,
    Solid_bell_slash,
    Solid_bezier_curve,
    Solid_bible,
    Solid_bicycle,
    Solid_biking,
    Solid_binoculars,
    Solid_biohazard,
    Solid_birthday_cake,
    Solid_blender,
    Solid_blender_phone,
    Solid_blind,
    Solid_blog,
    Solid_bold,
    Solid_bolt,
    Solid_bomb,
    Solid_bone,
    Solid_bong,
    Solid_book,
    Solid_book_dead,
    Solid_bookmark,
    Solid_book_medical,
    Solid_book_open,
    Solid_book_reader,
    Solid_border_all,
    Solid_border_none,
    Solid_border_style,
    Solid_bowling_ball,
    Solid_box,
    Solid_boxes,
    Solid_box_open,
    Solid_braille,
    Solid_brain,
    Solid_bread_slice,
    Solid_briefcase,
    Solid_briefcase_medical,
    Solid_broadcast_tower,
    Solid_broom,
    Solid_brush,
    Solid_bug,
    Solid_building,
    Solid_bullhorn,
    Solid_bullseye,
    Solid_burn,
    Solid_bus,
    Solid_bus_alt,
    Solid_business_time,
    Solid_calculator,
    Solid_calendar,
    Solid_calendar_alt,
    Solid_calendar_check,
    Solid_calendar_day,
    Solid_calendar_minus,
    Solid_calendar_plus,
    Solid_calendar_times,
    Solid_calendar_week,
    Solid_camera,
    Solid_camera_retro,
    Solid_campground,
    Solid_candy_cane,
    Solid_cannabis,
    Solid_capsules,
    Solid_car,
    Solid_car_alt,
    Solid_car_battery,
    Solid_car_crash,
    Solid_caret_down,
    Solid_caret_left,
    Solid_caret_right,
    Solid_caret_square_down,
    Solid_caret_square_left,
    Solid_caret_square_right,
    Solid_caret_square_up,
    Solid_caret_up,
    Solid_carrot,
    Solid_car_side,
    Solid_cart_arrow_down,
    Solid_cart_plus,
    Solid_cash_register,
    Solid_cat,
    Solid_certificate,
    Solid_chair,
    Solid_chalkboard,
    Solid_chalkboard_teacher,
    Solid_charging_station,
    Solid_chart_area,
    Solid_chart_bar,
    Solid_chart_line,
    Solid_chart_pie,
    Solid_check,
    Solid_check_circle,
    Solid_check_double,
    Solid_check_square,
    Solid_cheese,
    Solid_chess,
    Solid_chess_bishop,
    Solid_chess_board,
    Solid_chess_king,
    Solid_chess_knight,
    Solid_chess_pawn,
    Solid_chess_queen,
    Solid_chess_rook,
    Solid_chevron_circle_down,
    Solid_chevron_circle_left,
    Solid_chevron_circle_right,
    Solid_chevron_circle_up,
    Solid_chevron_down,
    Solid_chevron_left,
    Solid_chevron_right,
    Solid_chevron_up,
    Solid_child,
    Solid_church,
    Solid_circle,
    Solid_circle_notch,
    Solid_city,
    Solid_clinic_medical,
    Solid_clipboard,
    Solid_clipboard_check,
    Solid_clipboard_list,
    Solid_clock,
    Solid_clone,
    Solid_closed_captioning,
    Solid_cloud,
    Solid_cloud_download_alt,
    Solid_cloud_meatball,
    Solid_cloud_moon,
    Solid_cloud_moon_rain,
    Solid_cloud_rain,
    Solid_cloud_showers_heavy,
    Solid_cloud_sun,
    Solid_cloud_sun_rain,
    Solid_cloud_upload_alt,
    Solid_cocktail,
    Solid_code,
    Solid_code_branch,
    Solid_coffee,
    Solid_cog,
    Solid_cogs,
    Solid_coins,
    Solid_columns,
    Solid_comment,
    Solid_comment_alt,
    Solid_comment_dollar,
    Solid_comment_dots,
    Solid_comment_medical,
    Solid_comments,
    Solid_comments_dollar,
    Solid_comment_slash,
    Solid_compact_disc,
    Solid_compass,
    Solid_compress,
    Solid_compress_arrows_alt,
    Solid_concierge_bell,
    Solid_cookie,
    Solid_cookie_bite,
    Solid_copy,
    Solid_copyright,
    Solid_couch,
    Solid_credit_card,
    Solid_crop,
    Solid_crop_alt,
    Solid_cross,
    Solid_crosshairs,
    Solid_crow,
    Solid_crown,
    Solid_crutch,
    Solid_cube,
    Solid_cubes,
    Solid_cut,
    Solid_database,
    Solid_deaf,
    Solid_democrat,
    Solid_desktop,
    Solid_dharmachakra,
    Solid_diagnoses,
    Solid_dice,
    Solid_dice_d6,
    Solid_dice_d20,
    Solid_dice_five,
    Solid_dice_four,
    Solid_dice_one,
    Solid_dice_six,
    Solid_dice_three,
    Solid_dice_two,
    Solid_digital_tachograph,
    Solid_directions,
    Solid_divide,
    Solid_dizzy,
    Solid_dna,
    Solid_dog,
    Solid_dollar_sign,
    Solid_dolly,
    Solid_dolly_flatbed,
    Solid_donate,
    Solid_door_closed,
    Solid_door_open,
    Solid_dot_circle,
    Solid_dove,
    Solid_download,
    Solid_drafting_compass,
    Solid_dragon,
    Solid_draw_polygon,
    Solid_drum,
    Solid_drum_steelpan,
    Solid_drumstick_bite,
    Solid_dumbbell,
    Solid_dumpster,
    Solid_dumpster_fire,
    Solid_dungeon,
    Solid_edit,
    Solid_egg,
    Solid_eject,
    Solid_ellipsis_h,
    Solid_ellipsis_v,
    Solid_envelope,
    Solid_envelope_open,
    Solid_envelope_open_text,
    Solid_envelope_square,
    Solid_equals,
    Solid_eraser,
    Solid_ethernet,
    Solid_euro_sign,
    Solid_exchange_alt,
    Solid_exclamation,
    Solid_exclamation_circle,
    Solid_exclamation_triangle,
    Solid_expand,
    Solid_expand_arrows_alt,
    Solid_external_link_alt,
    Solid_external_link_square_alt,
    Solid_eye,
    Solid_eye_dropper,
    Solid_eye_slash,
    Solid_fan,
    Solid_fast_backward,
    Solid_fast_forward,
    Solid_fax,
    Solid_feather,
    Solid_feather_alt,
    Solid_female,
    Solid_fighter_jet,
    Solid_file,
    Solid_file_alt,
    Solid_file_archive,
    Solid_file_audio,
    Solid_file_code,
    Solid_file_contract,
    Solid_file_csv,
    Solid_file_download,
    Solid_file_excel,
    Solid_file_export,
    Solid_file_image,
    Solid_file_import,
    Solid_file_invoice,
    Solid_file_invoice_dollar,
    Solid_file_medical,
    Solid_file_medical_alt,
    Solid_file_pdf,
    Solid_file_powerpoint,
    Solid_file_prescription,
    Solid_file_signature,
    Solid_file_upload,
    Solid_file_video,
    Solid_file_word,
    Solid_fill,
    Solid_fill_drip,
    Solid_film,
    Solid_filter,
    Solid_fingerprint,
    Solid_fire,
    Solid_fire_alt,
    Solid_fire_extinguisher,
    Solid_first_aid,
    Solid_fish,
    Solid_fist_raised,
    Solid_flag,
    Solid_flag_checkered,
    Solid_flag_usa,
    Solid_flask,
    Solid_flushed,
    Solid_folder,
    Solid_folder_minus,
    Solid_folder_open,
    Solid_folder_plus,
    Solid_font,
    Solid_font_awesome_logo_full,
    Solid_football_ball,
    Solid_forward,
    Solid_frog,
    Solid_frown,
    Solid_frown_open,
    Solid_funnel_dollar,
    Solid_futbol,
    Solid_gamepad,
    Solid_gas_pump,
    Solid_gavel,
    Solid_gem,
    Solid_genderless,
    Solid_ghost,
    Solid_gift,
    Solid_gifts,
    Solid_glass_cheers,
    Solid_glasses,
    Solid_glass_martini,
    Solid_glass_martini_alt,
    Solid_glass_whiskey,
    Solid_globe,
    Solid_globe_africa,
    Solid_globe_americas,
    Solid_globe_asia,
    Solid_globe_europe,
    Solid_golf_ball,
    Solid_gopuram,
    Solid_graduation_cap,
    Solid_greater_than,
    Solid_greater_than_equal,
    Solid_grimace,
    Solid_grin,
    Solid_grin_alt,
    Solid_grin_beam,
    Solid_grin_beam_sweat,
    Solid_grin_hearts,
    Solid_grin_squint,
    Solid_grin_squint_tears,
    Solid_grin_stars,
    Solid_grin_tears,
    Solid_grin_tongue,
    Solid_grin_tongue_squint,
    Solid_grin_tongue_wink,
    Solid_grin_wink,
    Solid_grip_horizontal,
    Solid_grip_lines,
    Solid_grip_lines_vertical,
    Solid_grip_vertical,
    Solid_guitar,
    Solid_hamburger,
    Solid_hammer,
    Solid_hamsa,
    Solid_hand_holding,
    Solid_hand_holding_heart,
    Solid_hand_holding_usd,
    Solid_hand_lizard,
    Solid_hand_middle_finger,
    Solid_hand_paper,
    Solid_hand_peace,
    Solid_hand_point_down,
    Solid_hand_pointer,
    Solid_hand_point_left,
    Solid_hand_point_right,
    Solid_hand_point_up,
    Solid_hand_rock,
    Solid_hands,
    Solid_hand_scissors,
    Solid_handshake,
    Solid_hands_helping,
    Solid_hand_spock,
    Solid_hanukiah,
    Solid_hard_hat,
    Solid_hashtag,
    Solid_hat_cowboy,
    Solid_hat_cowboy_side,
    Solid_hat_wizard,
    Solid_haykal,
    Solid_hdd,
    Solid_heading,
    Solid_headphones,
    Solid_headphones_alt,
    Solid_headset,
    Solid_heart,
    Solid_heartbeat,
    Solid_heart_broken,
    Solid_helicopter,
    Solid_highlighter,
    Solid_hiking,
    Solid_hippo,
    Solid_history,
    Solid_hockey_puck,
    Solid_holly_berry,
    Solid_home,
    Solid_horse,
    Solid_horse_head,
    Solid_hospital,
    Solid_hospital_alt,
    Solid_hospital_symbol,
    Solid_hotdog,
    Solid_hotel,
    Solid_hot_tub,
    Solid_hourglass,
    Solid_hourglass_end,
    Solid_hourglass_half,
    Solid_hourglass_start,
    Solid_house_damage,
    Solid_hryvnia,
    Solid_h_square,
    Solid_ice_cream,
    Solid_icicles,
    Solid_icons,
    Solid_i_cursor,
    Solid_id_badge,
    Solid_id_card,
    Solid_id_card_alt,
    Solid_igloo,
    Solid_image,
    Solid_images,
    Solid_inbox,
    Solid_indent,
    Solid_industry,
    Solid_infinity,
    Solid_info,
    Solid_info_circle,
    Solid_italic,
    Solid_jedi,
    Solid_joint,
    Solid_journal_whills,
    Solid_kaaba,
    Solid_key,
    Solid_keyboard,
    Solid_khanda,
    Solid_kiss,
    Solid_kiss_beam,
    Solid_kiss_wink_heart,
    Solid_kiwi_bird,
    Solid_landmark,
    Solid_language,
    Solid_laptop,
    Solid_laptop_code,
    Solid_laptop_medical,
    Solid_laugh,
    Solid_laugh_beam,
    Solid_laugh_squint,
    Solid_laugh_wink,
    Solid_layer_group,
    Solid_leaf,
    Solid_lemon,
    Solid_less_than,
    Solid_less_than_equal,
    Solid_level_down_alt,
    Solid_level_up_alt,
    Solid_life_ring,
    Solid_lightbulb,
    Solid_link,
    Solid_lira_sign,
    Solid_list,
    Solid_list_alt,
    Solid_list_ol,
    Solid_list_ul,
    Solid_location_arrow,
    Solid_lock,
    Solid_lock_open,
    Solid_long_arrow_alt_down,
    Solid_long_arrow_alt_left,
    Solid_long_arrow_alt_right,
    Solid_long_arrow_alt_up,
    Solid_low_vision,
    Solid_luggage_cart,
    Solid_magic,
    Solid_magnet,
    Solid_mail_bulk,
    Solid_male,
    Solid_map,
    Solid_map_marked,
    Solid_map_marked_alt,
    Solid_map_marker,
    Solid_map_marker_alt,
    Solid_map_pin,
    Solid_map_signs,
    Solid_marker,
    Solid_mars,
    Solid_mars_double,
    Solid_mars_stroke,
    Solid_mars_stroke_h,
    Solid_mars_stroke_v,
    Solid_mask,
    Solid_medal,
    Solid_medkit,
    Solid_meh,
    Solid_meh_blank,
    Solid_meh_rolling_eyes,
    Solid_memory,
    Solid_menorah,
    Solid_mercury,
    Solid_meteor,
    Solid_microchip,
    Solid_microphone,
    Solid_microphone_alt,
    Solid_microphone_alt_slash,
    Solid_microphone_slash,
    Solid_microscope,
    Solid_minus,
    Solid_minus_circle,
    Solid_minus_square,
    Solid_mitten,
    Solid_mobile,
    Solid_mobile_alt,
    Solid_money_bill,
    Solid_money_bill_alt,
    Solid_money_bill_wave,
    Solid_money_bill_wave_alt,
    Solid_money_check,
    Solid_money_check_alt,
    Solid_monument,
    Solid_moon,
    Solid_mortar_pestle,
    Solid_mosque,
    Solid_motorcycle,
    Solid_mountain,
    Solid_mouse,
    Solid_mouse_pointer,
    Solid_mug_hot,
    Solid_music,
    Solid_network_wired,
    Solid_neuter,
    Solid_newspaper,
    Solid_not_equal,
    Solid_notes_medical,
    Solid_object_group,
    Solid_object_ungroup,
    Solid_oil_can,
    Solid_om,
    Solid_otter,
    Solid_outdent,
    Solid_pager,
    Solid_paint_brush,
    Solid_paint_roller,
    Solid_palette,
    Solid_pallet,
    Solid_paperclip,
    Solid_paper_plane,
    Solid_parachute_box,
    Solid_paragraph,
    Solid_parking,
    Solid_passport,
    Solid_pastafarianism,
    Solid_paste,
    Solid_pause,
    Solid_pause_circle,
    Solid_paw,
    Solid_peace,
    Solid_pen,
    Solid_pen_alt,
    Solid_pencil_alt,
    Solid_pencil_ruler,
    Solid_pen_fancy,
    Solid_pen_nib,
    Solid_pen_square,
    Solid_people_carry,
    Solid_pepper_hot,
    Solid_percent,
    Solid_percentage,
    Solid_person_booth,
    Solid_phone,
    Solid_phone_alt,
    Solid_phone_slash,
    Solid_phone_square,
    Solid_phone_square_alt,
    Solid_phone_volume,
    Solid_photo_video,
    Solid_piggy_bank,
    Solid_pills,
    Solid_pizza_slice,
    Solid_place_of_worship,
    Solid_plane,
    Solid_plane_arrival,
    Solid_plane_departure,
    Solid_play,
    Solid_play_circle,
    Solid_plug,
    Solid_plus,
    Solid_plus_circle,
    Solid_plus_square,
    Solid_podcast,
    Solid_poll,
    Solid_poll_h,
    Solid_poo,
    Solid_poop,
    Solid_poo_storm,
    Solid_portrait,
    Solid_pound_sign,
    Solid_power_off,
    Solid_pray,
    Solid_praying_hands,
    Solid_prescription,
    Solid_prescription_bottle,
    Solid_prescription_bottle_alt,
    Solid_print,
    Solid_procedures,
    Solid_project_diagram,
    Solid_puzzle_piece,
    Solid_qrcode,
    Solid_question,
    Solid_question_circle,
    Solid_quidditch,
    Solid_quote_left,
    Solid_quote_right,
    Solid_quran,
    Solid_radiation,
    Solid_radiation_alt,
    Solid_rainbow,
    Solid_random,
    Solid_receipt,
    Solid_record_vinyl,
    Solid_recycle,
    Solid_redo,
    Solid_redo_alt,
    Solid_registered,
    Solid_remove_format,
    Solid_reply,
    Solid_reply_all,
    Solid_republican,
    Solid_restroom,
    Solid_retweet,
    Solid_ribbon,
    Solid_ring,
    Solid_road,
    Solid_robot,
    Solid_rocket,
    Solid_route,
    Solid_rss,
    Solid_rss_square,
    Solid_ruble_sign,
    Solid_ruler,
    Solid_ruler_combined,
    Solid_ruler_horizontal,
    Solid_ruler_vertical,
    Solid_running,
    Solid_rupee_sign,
    Solid_sad_cry,
    Solid_sad_tear,
    Solid_satellite,
    Solid_satellite_dish,
    Solid_save,
    Solid_school,
    Solid_screwdriver,
    Solid_scroll,
    Solid_sd_card,
    Solid_search,
    Solid_search_dollar,
    Solid_search_location,
    Solid_search_minus,
    Solid_search_plus,
    Solid_seedling,
    Solid_server,
    Solid_shapes,
    Solid_share,
    Solid_share_alt,
    Solid_share_alt_square,
    Solid_share_square,
    Solid_shekel_sign,
    Solid_shield_alt,
    Solid_ship,
    Solid_shipping_fast,
    Solid_shoe_prints,
    Solid_shopping_bag,
    Solid_shopping_basket,
    Solid_shopping_cart,
    Solid_shower,
    Solid_shuttle_van,
    Solid_sign,
    Solid_signal,
    Solid_signature,
    Solid_sign_in_alt,
    Solid_sign_language,
    Solid_sign_out_alt,
    Solid_sim_card,
    Solid_sitemap,
    Solid_skating,
    Solid_skiing,
    Solid_skiing_nordic,
    Solid_skull,
    Solid_skull_crossbones,
    Solid_slash,
    Solid_sleigh,
    Solid_sliders_h,
    Solid_smile,
    Solid_smile_beam,
    Solid_smile_wink,
    Solid_smog,
    Solid_smoking,
    Solid_smoking_ban,
    Solid_sms,
    Solid_snowboarding,
    Solid_snowflake,
    Solid_snowman,
    Solid_snowplow,
    Solid_socks,
    Solid_solar_panel,
    Solid_sort,
    Solid_sort_alpha_down,
    Solid_sort_alpha_down_alt,
    Solid_sort_alpha_up,
    Solid_sort_alpha_up_alt,
    Solid_sort_amount_down,
    Solid_sort_amount_down_alt,
    Solid_sort_amount_up,
    Solid_sort_amount_up_alt,
    Solid_sort_down,
    Solid_sort_numeric_down,
    Solid_sort_numeric_down_alt,
    Solid_sort_numeric_up,
    Solid_sort_numeric_up_alt,
    Solid_sort_up,
    Solid_spa,
    Solid_space_shuttle,
    Solid_spell_check,
    Solid_spider,
    Solid_spinner,
    Solid_splotch,
    Solid_spray_can,
    Solid_square,
    Solid_square_full,
    Solid_square_root_alt,
    Solid_stamp,
    Solid_star,
    Solid_star_and_crescent,
    Solid_star_half,
    Solid_star_half_alt,
    Solid_star_of_david,
    Solid_star_of_life,
    Solid_step_backward,
    Solid_step_forward,
    Solid_stethoscope,
    Solid_sticky_note,
    Solid_stop,
    Solid_stop_circle,
    Solid_stopwatch,
    Solid_store,
    Solid_store_alt,
    Solid_stream,
    Solid_street_view,
    Solid_strikethrough,
    Solid_stroopwafel,
    Solid_subscript,
    Solid_subway,
    Solid_suitcase,
    Solid_suitcase_rolling,
    Solid_sun,
    Solid_superscript,
    Solid_surprise,
    Solid_swatchbook,
    Solid_swimmer,
    Solid_swimming_pool,
    Solid_synagogue,
    Solid_sync,
    Solid_sync_alt,
    Solid_syringe,
    Solid_table,
    Solid_tablet,
    Solid_tablet_alt,
    Solid_table_tennis,
    Solid_tablets,
    Solid_tachometer_alt,
    Solid_tag,
    Solid_tags,
    Solid_tape,
    Solid_tasks,
    Solid_taxi,
    Solid_teeth,
    Solid_teeth_open,
    Solid_temperature_high,
    Solid_temperature_low,
    Solid_tenge,
    Solid_terminal,
    Solid_text_height,
    Solid_text_width,
    Solid_th,
    Solid_theater_masks,
    Solid_thermometer,
    Solid_thermometer_empty,
    Solid_thermometer_full,
    Solid_thermometer_half,
    Solid_thermometer_quarter,
    Solid_thermometer_three_quarters,
    Solid_th_large,
    Solid_th_list,
    Solid_thumbs_down,
    Solid_thumbs_up,
    Solid_thumbtack,
    Solid_ticket_alt,
    Solid_times,
    Solid_times_circle,
    Solid_tint,
    Solid_tint_slash,
    Solid_tired,
    Solid_toggle_off,
    Solid_toggle_on,
    Solid_toilet,
    Solid_toilet_paper,
    Solid_toolbox,
    Solid_tools,
    Solid_tooth,
    Solid_torah,
    Solid_torii_gate,
    Solid_tractor,
    Solid_trademark,
    Solid_traffic_light,
    Solid_train,
    Solid_tram,
    Solid_transgender,
    Solid_transgender_alt,
    Solid_trash,
    Solid_trash_alt,
    Solid_trash_restore,
    Solid_trash_restore_alt,
    Solid_tree,
    Solid_trophy,
    Solid_truck,
    Solid_truck_loading,
    Solid_truck_monster,
    Solid_truck_moving,
    Solid_truck_pickup,
    Solid_tshirt,
    Solid_tty,
    Solid_tv,
    Solid_umbrella,
    Solid_umbrella_beach,
    Solid_underline,
    Solid_undo,
    Solid_undo_alt,
    Solid_universal_access,
    Solid_university,
    Solid_unlink,
    Solid_unlock,
    Solid_unlock_alt,
    Solid_upload,
    Solid_user,
    Solid_user_alt,
    Solid_user_alt_slash,
    Solid_user_astronaut,
    Solid_user_check,
    Solid_user_circle,
    Solid_user_clock,
    Solid_user_cog,
    Solid_user_edit,
    Solid_user_friends,
    Solid_user_graduate,
    Solid_user_injured,
    Solid_user_lock,
    Solid_user_md,
    Solid_user_minus,
    Solid_user_ninja,
    Solid_user_nurse,
    Solid_user_plus,
    Solid_users,
    Solid_users_cog,
    Solid_user_secret,
    Solid_user_shield,
    Solid_user_slash,
    Solid_user_tag,
    Solid_user_tie,
    Solid_user_times,
    Solid_utensils,
    Solid_utensil_spoon,
    Solid_vector_square,
    Solid_venus,
    Solid_venus_double,
    Solid_venus_mars,
    Solid_vial,
    Solid_vials,
    Solid_video,
    Solid_video_slash,
    Solid_vihara,
    Solid_voicemail,
    Solid_volleyball_ball,
    Solid_volume_down,
    Solid_volume_mute,
    Solid_volume_off,
    Solid_volume_up,
    Solid_vote_yea,
    Solid_vr_cardboard,
    Solid_walking,
    Solid_wallet,
    Solid_warehouse,
    Solid_water,
    Solid_wave_square,
    Solid_weight,
    Solid_weight_hanging,
    Solid_wheelchair,
    Solid_wifi,
    Solid_wind,
    Solid_window_close,
    Solid_window_maximize,
    Solid_window_minimize,
    Solid_window_restore,
    Solid_wine_bottle,
    Solid_wine_glass,
    Solid_wine_glass_alt,
    Solid_won_sign,
    Solid_wrench,
    Solid_x_ray,
    Solid_yen_sign,
    Solid_yin_yang
  };
  Q_ENUM(Icon)

  /**
   * \brief Generate QPixmap for given icon
   * \note This function is SLOW, please hold the result and reuse it
   *       instead of call multiple times.
   * \param iconType  Enum value for wanted icon.
   * \param size      Pixel size for generated image.
   * \param color     Fill color of the icon.
   * \return          Generated QPixmap for the icon with given size and color.
   * \sa Icon, icon
   */
  static QPixmap pixmap(Icon iconType, int size = 16,
                        const QColor& color = Qt::white);

  /**
   * \brief Generate QIcon for given icon with available sizes: 16, 24, 32, 36,
   *        48, 64, 72, 96, 128, 144, 192, 256.
   * \note This function is EXTREMELY SLOW, please hold the result and reuse it
   *       instead of call multiple times.
   * \param iconType  Enum value for wanted icon.
   * \param color     Fill color of the icon, QIcon::Disabled will for to gray.
   * \return          Generated QIcon for the icon with given size and color.
   * \sa Icon, pixmap, icon
   */
  static QIcon icon(Icon iconType, const QColor& color = Qt::white);

  /**
   * \brief Set icon to given widget
   * \note This function is EXTREMELY SLOW, please avoid calling multiple times.
   * \tparam T        Type of given widget.
   * \param widget    Widget to be set icon fpr.
   * \param iconType  Enum value for wanted icon.
   * \param color     Fill color of the icon, QIcon::Disabled will for to gray.
   * \sa Icon, pixmap, icon
   */
  template <typename T>
  inline static void SetIcon(T* widget, Icon iconType,
                             const QColor& color = Qt::white) {
    widget->setProperty("icon", icon(iconType, color));
  }

 private:
  IconHelper() = default;
};
}  // namespace KtUtils

#endif  // KT_UTILS_ICONHELPER_H
